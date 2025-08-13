#include "includes.h"

void	noteMenu(WINDOW *win, int yMax, int xMax)
{
	wrefresh(win);
	// wclear(stdscr);
	// delwin(win);
	char	input;
	WINDOW *note = newwin(yMax / 3, xMax / 5, yMax / 6, xMax / 6);
	while (input = wgetch(note))
	{
		
	}
	mvwprintw(note, yMax / 2, xMax / 2, "Hello, Ncurses!");
	box(note, 0, 0);
	wrefresh(note);
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