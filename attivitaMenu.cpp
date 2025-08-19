#include "includes.h"

void	attivitaMenu(Registro **reg, int index, int selection)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(10, 30, yMax / 4 , xMax / 3);
	char	input;

	// start_color();
	box(win, 0, 0);
	// mvchgat(0, 0, -1, A_BLINK, 1, NULL);	
	// init_pair(1, COLOR_CYAN, COLOR_BLACK);
	wattron(win, A_BOLD);
	mvwprintw(win, 1, 2, "%s", reg[index]->getGiorno().c_str());
	wattroff(win, A_BOLD);
	mvwprintw(win, 3, 2, "%s", reg[index]->getAttvita(selection).getName().c_str());
	mvwprintw(win, 5, 2, "%s", reg[index]->getAttvita(selection).getDescription().c_str());
	mvwprintw(win, 8, 2, "Inizio: %s", reg[index]->getAttvita(selection).getOrarioInizio().c_str());
	mvwprintw(win, 8, 17, "Fine: %s", reg[index]->getAttvita(selection).getOrarioFine().c_str());
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