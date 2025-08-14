#include "includes.h"

void	mainLoop(WINDOW *win, int yMax, int xMax, Registro **reg)
{
	char	input;
	int		mainMenuSelection = -1;
	int		option;

	mainMenu(win, input, &mainMenuSelection);
	while (input = wgetch(win))
	{
		mainMenu(win, input, &mainMenuSelection);
		option = optionsMainMenu(win, input, &mainMenuSelection);
		switch (option)
		{
			case NOTE:
				noteMenu(win, reg);
			case ESCI:
				exit(win);
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
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	Registro** reg = new Registro*[7];
	initRegister(reg);
	WINDOW *win = newwin(yMax / 6, xMax / 6, yMax / 4 , xMax / 2);
	mainLoop(win, yMax, xMax, reg);
	endwin();
	return (0);
}
