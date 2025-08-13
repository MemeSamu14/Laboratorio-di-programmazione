#include "includes.h"

void	drawMainMenu(WINDOW *win, char input, int *selection)
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

bool	areYouSurePanel(WINDOW *win, const char *option)
{
	bool	value = false;
	int		selection = YES - 1;
	int		yMax, xMax;
	wclear(win);
	box(win, 0, 0);
    refresh();
	getmaxyx(win, yMax, xMax);
	mvwprintw(win, yMax / 8, (xMax / 2) - 7, "Are you Sure?");
	mvwprintw(win, (yMax / 8) + (yMax / 6), (xMax / 2) - 4 - (strlen(option) / 2), "Option: %s", option);
	mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
	mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
    refresh();
	std::cout << yMax  << " | "<< xMax << std::endl; 
	char	input;
	while (input = wgetch(win))
	{
		if (input == '	')
		{
			selection++;
			if (selection == 6)
				selection = YES;
			if (selection == YES)
			{
				wattron(win, A_STANDOUT);
				mvwprintw(win, yMax / 2, xMax / 8, "Yes");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
			}
			else if (selection == NO)
			{
				mvwprintw(win, yMax / 2, xMax / 8, "Yes");
				wattron(win, A_STANDOUT);
				mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
				wattroff(win, A_STANDOUT);
			}
			else
			{
				mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
				mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
			}
		}
		else if (input == 10)
		{
			if (selection == YES)
				return (true);
			else if (selection == NO)
				break ;
		}
	}
	return (false);
}
