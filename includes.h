#include <ncurses.h>
#include <iostream>
#include <cstring>


enum	Selection
{
	NOSELECTION = -1,
	NOTE = 0,
	OPZIONI = 1,
	ESCI = 2,
	YES = 4,
	NO = 5,
	LUNEDI = 6,
	MARTEDI = 7,
	MERCOLEDI = 8,
	GIOVEDI = 9,
	VENERDI = 10,
	SABATO = 11,
	DOMENICA = 12,
	INDIETRO = 13
};

/*-------------------------draw.cpp----------------------------------*/
void	drawMainMenu(WINDOW *win, char input, int *selection);
bool	areYouSurePanel(WINDOW *win, const char *option);

/*-------------------------optionsMainMenu.cpp----------------------------------*/
int		optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection);
void	exit(WINDOW *win);

void	noteMenu(WINDOW *win);


void	mainLoop(WINDOW *win, int yMax, int xMax);