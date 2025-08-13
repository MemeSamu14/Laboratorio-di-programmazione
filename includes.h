#include <ncurses.h>
#include <iostream>
#include <cstring>


enum	Selection
{
	NOTE = 0,
	OPZIONI = 1,
	ESCI = 2,
	NOSELECTION = 3,
	YES = 4,
	NO = 5
};

/*-------------------------draw.cpp----------------------------------*/
void	drawMainMenu(WINDOW *win, char input, int *selection);
bool	areYouSurePanel(WINDOW *win, const char *option);

/*-------------------------optionsMainMenu.cpp----------------------------------*/
int		optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection);
void	exit(WINDOW *win);
