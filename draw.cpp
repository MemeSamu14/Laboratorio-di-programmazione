#include "includes.h"

bool	areYouSurePanel(WINDOW *win, const char *option)
{
	bool	value = false;
	int		selection = YES - 1;
	int		yMax, xMax;

	wclear(win);
	box(win, 0, 0);
    refresh();
	getmaxyx(win, yMax, xMax);
	mvwprintw(win, 3, 7, "Are you Sure?");
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
				mvwprintw(win, (yMax / 2), 10, "No");
			}
			else if (selection == NO)
			{
				mvwprintw(win, yMax / 2, xMax / 8, "Yes");
				wattron(win, A_STANDOUT);
				mvwprintw(win, (yMax / 2), 10, "No");
				wattroff(win, A_STANDOUT);
			}
			else
			{
				mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
				mvwprintw(win, (yMax / 2), 10, "No");
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
