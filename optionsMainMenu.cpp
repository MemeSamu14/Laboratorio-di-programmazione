#include "includes.h"

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
				drawMainMenu(win, input, mainMenuSelection);
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
