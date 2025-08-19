#include "includes.h"

void	attivitaMenu(Registro **reg, int index, int selection)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(20, 30, yMax / 4 , xMax / 3);
	char	input;

	start_color();
	box(win, 0, 0);
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);	
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	mvwprintw(win, 2, 2, "%s", reg[index]->getAttvita(selection).getName().c_str());
	mvwprintw(win, 4, 2, "%s", reg[index]->getAttvita(selection).getDescription().c_str());
	// mvwprintw(win, 7, 2, "%s", );
	wrefresh(win);
	while (input = wgetch(win))
	{
		if (input == '	')
		{
			wclear(win);
			closeWin(win);
			visualizzaMenu(reg, index);
		}
	}
}