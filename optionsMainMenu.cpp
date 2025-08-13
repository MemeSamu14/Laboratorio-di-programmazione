#include "includes.h"

int	optionsMainMenu(WINDOW *win, char input, int *mainMenuSelection)
{
	if ((*mainMenuSelection) == ESCI)
	{
		if (input == 10)
		{
			if (areYouSurePanel(win, "Exit") == true)
				return (ESCI);
			else
			{
				wclear(win);
				drawMainMenu(win, input, mainMenuSelection);
			}
		}
	}
	return (0);
}

void	exit(WINDOW *win)
{
	delwin(win);
	endwin();
	exit(1);
}
