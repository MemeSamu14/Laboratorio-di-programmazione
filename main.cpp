#include "includes.h"

int	main()
{
	initscr();
	noecho();
	curs_set(0);
	// int	yMax, xMax;
	// getmaxyx(stdscr, yMax, xMax);

	// WINDOW *win = newwin(yMax / 6, xMax / 6, yMax / 6, xMax / 6);
	// char	input;
	// int		mainMenuSelection = -1;
	// bool	mainMenu = true;
	// int		option;

	// drawMainMenu(win, input, &mainMenuSelection);
	// while (input = wgetch(win))
	// {
	// 	drawMainMenu(win, input, &mainMenuSelection);
	// 	option = optionsMainMenu(win, input, &mainMenuSelection);
	// 	switch (option)
	// 	{
	// 		case ESCI:
	// 			exit(win);
	// 	}
	// }
	endwin();
	return (0);
}