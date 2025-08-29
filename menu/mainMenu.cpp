#include "../includes.h"


void	mainMenu(WINDOW *win, char input, int *selection)
{
	wrefresh(win);
	box(win, 0, 0);
	mvwprintw(win, 1, 2, "Note");
	mvwprintw(win, 3, 2, "Esci");
	if (input == '	')
		(*selection)++;
	if ((*selection) == 2)
		(*selection) = NOTE;
	if ((*selection) == NOTE)
	{
		wattron(win, A_STANDOUT);
		mvwprintw(win, 1, 2, "Note");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 3, 2, "Esci");
	}
	else if ((*selection) == ESCI)
	{
		mvwprintw(win, 1, 2, "Note");
		wattron(win, A_STANDOUT);
		mvwprintw(win, 3, 2, "Esci");
		wattroff(win, A_STANDOUT);
	}
	else
	{
		mvwprintw(win, 1, 2, "Note");
		mvwprintw(win, 3, 2, "Esci");
	}
}

int	optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection, Registro **reg)
{
	if (input == 10)
	{
		if ((*mainMenuSelection) == NOTE)
			return (NOTE);
		if ((*mainMenuSelection) == ESCI)
		{
			wclear(win);
			if (areYouSurePanel("Exit") == true)
				return (ESCI);
			else
			{
				wclear(win);
				delwin(win);
				mainLoop(reg);
			}
		}
	}
	return (-1);
}

void	exit(Registro **reg)
{
	for (int i = 0; i < 7; i++)
		delete reg[i];
	delete reg;
	endwin();
	exit(0);
}
