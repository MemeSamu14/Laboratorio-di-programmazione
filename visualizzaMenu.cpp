#include "includes.h"

void	visualizzaMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(30, 30, yMax / 4 , xMax / 2);
	char	input;
	int		selection = VISUALIZZA - 1;
	box(win, 0, 0);
	// wattron(win, A_BOLD);
	// mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
	// wattroff(win, A_BOLD);
	mvwprintw(win, 5, 2, "Vedi Lista Attivita");
	mvwprintw(win, 7, 2, "Aggiungi Attivita");
	mvwprintw(win, 9, 2, "Rimuovi Attivita");
	mvwprintw(win, 11, 2, "<- Indietro");
	box(win, 0, 0);
	while (input = wgetch(win))
	{		
		if (input == '	')
		{
		}
	}
	wrefresh(win);
}