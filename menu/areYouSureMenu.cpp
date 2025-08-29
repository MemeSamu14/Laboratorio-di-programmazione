#include "../includes.h"

bool	areYouSurePanel(const char *option)
{
	bool	value = false;
	int		selection = YES - 1;
	int		yMax, xMax;

	getmaxyx(stdscr, yMax, xMax);
	WINDOW *win = newwin(7, 18, 0, 0);
	box(win, 0, 0);
    refresh();
	getmaxyx(win, yMax, xMax);
	mvwprintw(win, 1, 2, "Are you Sure?");
	mvwprintw(win, 3, 2, "Option: %s", option);
	mvwprintw(win, 5, 2, "Yes");
	mvwprintw(win, 5, 12, "No");
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
				mvwprintw(win, 5, 2, "Yes");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, 5, 12, "No");
			}
			else if (selection == NO)
			{
				mvwprintw(win, 5, 2, "Yes");
				wattron(win, A_STANDOUT);
				mvwprintw(win, 5, 12, "No");
				wattroff(win, A_STANDOUT);
			}
			else
			{
				mvwprintw(win, 5, 2, "Yes");
				mvwprintw(win, 5, 12, "No");
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
