#include "includes.h"

void	noteMenu(WINDOW *win)
{
	wrefresh(win);
	// wclear(stdscr);
	// delwin(win);
	char	input;
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW *note = newwin(17, 13, yMax / 4 , xMax / 2);
	getmaxyx(note, yMax, xMax);
	box(note, 0, 0);
	wrefresh(note);
	// daysMenu();
	while (input = wgetch(note))
	{
		mvwprintw(note, 1, 2, "Lunedi");
		mvwprintw(note, 3, 2, "Martedi");
		mvwprintw(note, 5, 2, "Mercoledi");
		mvwprintw(note, 7, 2, "Giovedi");
		mvwprintw(note, 9, 2, "Venerdi");
		mvwprintw(note, 11, 2, "Sabato");
		mvwprintw(note, 13, 2, "Domenica");
		mvwprintw(note, 15, 1, "<- indietro");
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

