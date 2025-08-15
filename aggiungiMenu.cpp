#include "includes.h"

void	aggiungiMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	bool	exit_condition = false;
	WINDOW	*win = newwin(10, 50, yMax / 4 , xMax / 3);
	char		input = 0;
	int			selection = 0;
	std::string	inputStr;

	int y, x;
    getyx(win, y, x);
	int	yIni = y, xIni = x;
	echo();
	cbreak();
	curs_set(1);
	keypad(win, TRUE);
	// box(win, 0, 0);
	mvwprintw(win, 1, 2, "inserisci il nome: ");
	wrefresh(win);
	while (input = wgetch(win))
	{
		if (input == 10 && inputStr.size() > 1)
			break ;
		// mvwprintw(win, 0, 2, "%d", input);
		if (input == 7)
		{
			// if (x - 1 == 1)
			// 	wmove(win, y - 1, x + 49);
			// else
			// if (xIni != x)
			// {
			if (inputStr.size() > 1)
			{
				wdelch(win);
				inputStr.pop_back();
			}
			// std::cout << "input: " << inputStr.size() << std::endl;
			// }
			// wmove(win, y, 48);
			// wdelch(win);
			// wmove(win, y, x - 1);

			// box(win, 0, 0);
		}
		else if (isprint(input) && inputStr.size() < 20)
		{
			inputStr.push_back(input);
		}
		wrefresh(win);
	}





	// input = getch();
	// while (input != 10 && exit_condition != true)
	// {
	// 	// mvwprintw(win, 3, 2, "inserisci il nome: ");
	// 	// wrefresh(win);
	// 	input = getch();
	// 	if (inputStr.size() == 20 || input == '	' || input == '*' || input == KEY_BACKSPACE || input < 32 || input == 127)
	// 	{
	// 		move(getcury(stdscr), getcurx(stdscr) - 1);
	// 		delch();
	// 	}
	// 	else
	// 		inputStr.push_back(input);
	// 	if (inputStr.size() >= 1)
	// 		exit_condition = true;
	// 	wrefresh(win);
	// }
	// printAggiungiMenu(win, reg, index, selection);
	// while (input = wgetch(win))
	// {		
	// 	if (input == '	')
	// 	{
	// 		selection++;
	// 		if (selection == 12)
	// 			selection = 1;
	// 		printAggiungiMenu(win, reg, index, selection);
	// 	}
	// 	else if (input == 10)
	// 	{
	// 		if (selection == 11)
	// 		{
	// 			closeWin(win);
	// 			registerMenu(index, reg);
	// 		}
	// 	}
	// }
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