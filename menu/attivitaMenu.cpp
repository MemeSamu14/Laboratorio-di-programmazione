#include "../includes.h"

void	attivitaMenu(Registro **reg, int index, int selection)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(10, 30, 0, 0);
	char	input;

	box(win, 0, 0);
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
