#include <ncurses.h>
#include <iostream>
#include <cstring>
#include "Registro.hpp"

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
	INDIETRO = 13,
	VISUALIZZA = 14,
	AGGIUNGI = 15,
	ELIMINA = 16,
	BACK = 17
};

/*-------------------------draw.cpp----------------------------------*/

bool	areYouSurePanel(WINDOW *win, const char *option);

/*-------------------------mainMenu.cpp----------------------------------*/
void	mainMenu(WINDOW *win, char input, int *selection);
int		optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection);
void	exit(WINDOW *win);

void	noteMenu(WINDOW *win, Registro **reg);


void	mainLoop(WINDOW *win, int yMax, int xMax, Registro **reg);