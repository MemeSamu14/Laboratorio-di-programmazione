#include "includes.h"


void	mainMenu(WINDOW *win, char input, int *selection)
{
	box(win, 0, 0);
	mvwprintw(win, 1, 2, "Note");
	mvwprintw(win, 3, 2, "Opzioni");
	mvwprintw(win, 5, 2, "Esci");
	if (input == '	')
		(*selection)++;
	if ((*selection) == 3)
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

int	optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection)
{
	if (input == 10)
	{
		if ((*mainMenuSelection) == NOTE)
		{
			wclear(win);
			return (NOTE);
		}
		if ((*mainMenuSelection) == ESCI)
		{
			if (areYouSurePanel(win, "Exit") == true)
				return (ESCI);
			else
			{
				wclear(win);
				mainMenu(win, input, mainMenuSelection);
			}
		}
	}
	return (-1);
}

void	exit(WINDOW *win)
{
	delwin(win);
	endwin();
	exit(1);
}
