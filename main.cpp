#include "includes.h"

void	closeWin(WINDOW *win)
{
	wclear(win);
	wrefresh(win);
	delwin(win);
}

void	mainLoop(Registro **reg)
{
	char	input;
	int		mainMenuSelection = -1;
	int		option;
	int		yMax, xMax;

	getmaxyx(stdscr, yMax, xMax);
	WINDOW *win = newwin(yMax / 6, xMax / 6, yMax / 4 , xMax / 2);
	mainMenu(win, input, &mainMenuSelection);
	while (input = wgetch(win))
	{
		mainMenu(win, input, &mainMenuSelection);
		option = optionsMainMenu(win, input, &mainMenuSelection, reg);
		switch (option)
		{
			case NOTE:
				closeWin(win);
				noteMenu(reg);
			case ESCI:
				delwin(win);
				exit();
		}
	}
}

void	initRegister(Registro **reg)
{
	reg[0] = new Registro("Lunedi");
	reg[1] = new Registro("Martedi");
	reg[2] = new Registro("Mercoledi");
	reg[3] = new Registro("Giovedi");
	reg[4] = new Registro("Venerdi");
	reg[5] = new Registro("Sabato");
	reg[6] = new Registro("Domenica");
}

int	main()
{
	initscr();
	noecho();
	curs_set(0);

	Registro** reg = new Registro*[7];
	initRegister(reg);
	mainLoop(reg);
	endwin();
	return (0);
}
