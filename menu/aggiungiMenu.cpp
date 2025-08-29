#include "../includes.h"


void	boostedGetStr(WINDOW *win, std::string &str, int max)
{
	int	input;

	str.clear();
	noecho();
	curs_set(1);
	
	while ((input = wgetch(win)) != 10)
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

void	inputError(WINDOW *win, const std::string &str)
{
	wclear(win);
	mvwprintw(win, 1, 2, "%s", str.c_str()); 
	noecho();
	wgetch(win);
	echo();
}

void	aggiungiMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW	*win = newwin(10, 50, 0, 0);
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
	if (str.size() < 1)
		a.setName("Unnamed");
	else
		a.setName(str);

	wclear(win);
	mvwprintw(win, 1, 2, "inserisci la descrizione: ");
	boostedGetStr(win, str, 80);
		if (str.size() < 1)
		a.setDescription("No Description");
	else
		a.setDescription(str);

	bool	condition = false;
	std::string	completeStr;
	int	start;
	while (condition == false)
	{
		wclear(win);
		mvwprintw(win, 1, 2, "Ora Inizio: ");
		boostedGetStr(win, str, 2);
	
		if ((str[0] >= '0' && str[0] <= '9'))
		{
			if (std::atoi(str.c_str()) >= 0 && std::atoi(str.c_str()) < 24)
			{
				start = std::atoi(str.c_str());
				condition = true;
			}
			else
				inputError(win, "Orario Invalido");
		}
		else
			inputError(win, "Inserisci dei numeri perfavore");

		
	}
	if (std::atoi(str.c_str()) < 10)
		completeStr = "0" + std::string(1, str[0]) + ":00";
	else
		completeStr = std::string(1, str[0]) + std::string(1, str[1]) + ":00";
	a.setOrarioInizio(completeStr);

	condition = false;
	while (condition == false)
	{
		wclear(win);
		mvwprintw(win, 1, 2, "Ora Fine: ");
		boostedGetStr(win, str, 2);
	
		if ((str[0] >= '0' && str[0] <= '9'))
		{
			if (std::atoi(str.c_str()) >= 0 && std::atoi(str.c_str()) <= 24)
			{
				if (start >= std::atoi(str.c_str()))
					inputError(win, "Fascia Orario Invalida");
				else
					condition = true;
			}
			else
				inputError(win, "Orario Invalido");
		}
		else
			inputError(win, "Inserisci dei numeri perfavore");
	}
	completeStr.clear();
	if (std::atoi(str.c_str()) < 10)
		completeStr = "0" + std::string(1, str[0]) + ":00";
	else
		completeStr = std::string(1, str[0]) + std::string(1, str[1]) + ":00";
	a.setOrarioFine(completeStr);

	int selectIndex = static_cast<int>(input) - 48;
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


