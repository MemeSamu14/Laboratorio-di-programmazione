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
};

/*-------------------------draw.cpp----------------------------------*/

bool	areYouSurePanel(const char *option);

/*-------------------------mainMenu.cpp----------------------------------*/
void	mainMenu(WINDOW *win, char input, int *selection);
int		optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection, Registro **reg);
void	exit();

void	noteMenu(Registro **reg);


void	mainLoop(Registro **reg);


void	closeWin(WINDOW *win);

void	visualizzaMenu(Registro **reg, int index);

void	registerMenu(int index, Registro **reg);

void	aggiungiMenu(Registro **reg, int index);


void	rimuoviMenu(Registro **reg, int index);