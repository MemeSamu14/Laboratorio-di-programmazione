#include "includes.h"

void	daysMenu(WINDOW *note, char input, int *selection)
{
	box(note, 0, 0);
	if ((*selection) == LUNEDI - 1)
	{
		mvwprintw(note, 1, 2, "Lunedi");
		mvwprintw(note, 3, 2, "Martedi");
		mvwprintw(note, 5, 2, "Mercoledi");
		mvwprintw(note, 7, 2, "Giovedi");
		mvwprintw(note, 9, 2, "Venerdi");
		mvwprintw(note, 11, 2, "Sabato");
		mvwprintw(note, 13, 2, "Domenica");
		mvwprintw(note, 15, 1, "<- indietro");
	}
	if (input == '	')
	{
		(*selection)++;
		if ((*selection) == 14)
			(*selection) = LUNEDI;
		if ((*selection) == LUNEDI)
		{
			wattron(note, A_STANDOUT);
			mvwprintw(note, 1, 2, "Lunedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == MARTEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 3, 2, "Martedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == MERCOLEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 5, 2, "Mercoledi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == GIOVEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 7, 2, "Giovedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == VENERDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 9, 2, "Venerdi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == SABATO)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 11, 2, "Sabato");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == DOMENICA)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 13, 2, "Domenica");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == INDIETRO)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 15, 1, "<- indietro");
			wattroff(note, A_STANDOUT);
		}
		wrefresh(note);
	}
}


void	noteMenu(WINDOW *win)
{
	wrefresh(win);
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW *note = newwin(17, 13, yMax / 4 , xMax / 2);
	getmaxyx(note, yMax, xMax);
	int	noteSelection = LUNEDI - 1;
	char	input = LUNEDI - 1;
	int		option;
	// wrefresh(note);
	daysMenu(note, input, &noteSelection);
	while (input = wgetch(note))
	{
		daysMenu(note, input, &noteSelection);
		if (input == 10)
		{
			switch (noteSelection)
			{
				case INDIETRO:
					wclear(note);
					wrefresh(note);
					mainLoop(win, yMax, xMax);
			}
		}
		// mvaddch(yMax / 2, xMax / 2, '-');
		// wrefresh(note);
	}
	// mainLoop(win, yMax, xMax);
	// wprintw(win, "ciao");
	// wrefresh(win);
	// wgetch(win);
	// // touchwin();
	// wnoutrefresh(win);
	// doupdate();
	input = wgetch(note);
	// mainLoop(main, yMax, xMax);
}

