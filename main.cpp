#include <ncurses.h>


enum	MenuSelection
{
	NOTE = 0,
	OPZIONI = 1,
	ESCI = 2,
	NOSELECTION = 3
};

void	drawMainMenu(WINDOW *win, char input, int *selection)
{
	printf("input: %d\n", input);
	// printf("selection: %d\n", selection);
	if (input == '	')
		(*selection)++;
	if ((*selection) == NOSELECTION)
		(*selection) = NOTE;
	if ((*selection) == NOTE)
	{
		wattron(win, A_STANDOUT);
		mvwprintw(win, 1, 2, "Note");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 3, 2, "Opzioni");
		mvwprintw(win, 5, 2, "Esci");
	}
	else if ((*selection) == OPZIONI)
	{
		mvwprintw(win, 1, 2, "Note");
		wattron(win, A_STANDOUT);
		mvwprintw(win, 3, 2, "Opzioni");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 5, 2, "Esci");
	}
	else if ((*selection) == ESCI)
	{
		mvwprintw(win, 1, 2, "Note");
		mvwprintw(win, 3, 2, "Opzioni");
		wattron(win, A_STANDOUT);
		mvwprintw(win, 5, 2, "Esci");
		wattroff(win, A_STANDOUT);
	}
	else
	{
		mvwprintw(win, 1, 2, "Note");
		mvwprintw(win, 3, 2, "Opzioni");
		mvwprintw(win, 5, 2, "Esci");
	}
}

bool	areYouSurePanel(WINDOW *win)
{
	// bool	value = false;
	// int		selection = 0;
	wclear(win);
	return (false);
	
}

int	main()
{
	initscr();
	noecho();
	curs_set(0);
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	// refresh();	
			
	WINDOW *win = newwin(yMax / 6, xMax / 6, yMax / 6, xMax / 6);
	box(win, 0, 0);
    refresh();
	mvwprintw(win, 1, 2, "Note");
	mvwprintw(win, 3, 2, "Opzioni");
	mvwprintw(win, 5, 2, "Esci");
	char	input;
	int		mainMenuSelection = -1;
	while (input = wgetch(win))
	{
		// printf("input: %d\n", input);
		drawMainMenu(win, input, &mainMenuSelection);
		if (mainMenuSelection == ESCI)
		{
			printf("mainmenuselection: %d\n", mainMenuSelection);
			// printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
			if (input == 10)
			{
				if (areYouSurePanel(win) == true)
					break ;
			}
			// if (input == 10)
		}
		
	}
	endwin();
	// wgetch(win);
	return (0);
}