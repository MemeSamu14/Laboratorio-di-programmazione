#include "includes.h"


void	boostedGetStr(WINDOW *win, std::string &str, int max)
{
	int	input;

	str.clear();
	noecho();
	curs_set(1);
	
	while ((input = wgetch(win)) != '\n')
	{
		if (input == KEY_BACKSPACE || input == 127)
		{
			if (!str.empty())
			{
				str.pop_back();
				int y, x;
				getyx(win, y, x);
				if (x > 0)
				{
					wmove(win, y, x - 1);
					wdelch(win);
					wrefresh(win);
				}
			}
		}
		else if (input >= 32 && input <= 126)
		{
			if (str.size() == max)
			{
				int y, x;
				getyx(win, y, x);
				if (x > 0)
				{
					wmove(win, y, x);
					wdelch(win);
					wrefresh(win);
				}
			}
			else
			{
				str.push_back(static_cast<char>(input));
				waddch(win, input);
				wrefresh(win);
			}
		}
	}
	echo();
	curs_set(0);
}

void	aggiungiMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW	*win = newwin(10, 50, yMax / 4 , xMax / 3);
	std::string	str;
	char		input;
	Attivita	a;

	mvwprintw(win, 1, 2, "Select index");
	while (input = wgetch(win))
	{
		if (input >= '0' && input <= '9')
			break ;
	}
	wclear(win);
	wrefresh(win);
	if (reg[index]->getAttvita(input - '0').getName() != "* VUOTO *")
	{
		if (areYouSurePanel("Overrite") == false)
		{
			closeWin(win);
			visualizzaMenu(reg, index);
		}
	}
	wrefresh(win);
	wclear(win);
	mvwprintw(win, 1, 2, "inserisci il nome: ");
	boostedGetStr(win, str, 20);
	a.setName(str);

	wclear(win);
	mvwprintw(win, 1, 2, "inserisci la descrizione: ");
	boostedGetStr(win, str, 60);
	a.setDescription(str);

	int selectIndex = static_cast<int>(input) - 48;
	reg[index]->deleteAttivita(selectIndex);
	reg[index]->addAttivita(a, selectIndex);
	wrefresh(win);
	closeWin(win);
	visualizzaMenu(reg, index);

}


		// if (inputStr.size() == 20 || input == '	' || input == '*' || input == KEY_BACKSPACE || input < 32 || input == 127)
		// {
		// 	move(getcury(stdscr), getcurx(stdscr) - 1);
		// 	delch();
		// }

// int main()
// {
//  char mesg[]="Enter a string: ";		/* message to be appeared on the screen */
//  char str[10];
//  int row,col;				/* to store the number of rows and *
// 					 * the number of colums of the screen */
//  initscr();				/* start the curses mode */
//  getmaxyx(stdscr,row,col);		/* get the number of rows and columns */
//  mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
//                      		/* print the message at the center of the screen */
//  getstr(str);
//  mvprintw(LINES - 2, 0, "You Entered: %s", str);
//  getch();
//  endwin();

//  return 0;
// }

/*
	start_color();
	
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("A Big string which i didn't care to type fully ");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);	
*/


