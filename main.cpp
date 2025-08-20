#include "includes.h"

void	closeWin(WINDOW *win)
{
	wclear(win);
	wrefresh(win);
	delwin(win);
}

void	mainLoop(Registro **reg)
{
	char	input = 0;
	int		mainMenuSelection = -1;
	int		option;
	int		yMax, xMax;

	getmaxyx(stdscr, yMax, xMax);
	WINDOW *win = newwin(5, 11, 0, 0);
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
				exit(reg);
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
	Attivita	a("* VUOTO *");
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
			reg[i]->addAttivita(a, j);
	}
	mainLoop(reg);
	return (0);
}
