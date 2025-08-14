#include "includes.h"

bool	areYouSurePanel(const char *option)
{
	bool	value = false;
	int		selection = YES - 1;
	int		yMax, xMax;

	getmaxyx(stdscr, yMax, xMax);
	WINDOW *win = newwin(yMax / 6, xMax / 5, yMax / 4 , xMax / 2);
	box(win, 0, 0);
    refresh();
	getmaxyx(win, yMax, xMax);
	mvwprintw(win, 1, 5, "Are you Sure?");
	mvwprintw(win, 2, 3 + (strlen(option) / 2), "Option: %s", option);
	mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
	mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
    refresh();
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
				mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, (yMax / 2), (xMax / 3) + (xMax / 2), "No");
			}
			else if (selection == NO)
			{
				mvwprintw(win, (yMax / 2), (xMax / 8), "Yes");
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
			{
				closeWin(win);
				return (true);
			}
			else if (selection == NO)
				break ;
		}
	}
	closeWin(win);
	return (false);
}
