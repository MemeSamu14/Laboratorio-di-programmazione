#include "includes.h"


void	rimuoviMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW	*win = newwin(10, 50, 0, 0);
	std::string	str;
	char		input;
	Attivita	a;

	mvwprintw(win, 1, 2, "Select index");
	while (input = wgetch(win))
	{
		if (input >= '0' && input <= '9')
			break ;
	}
	wclear(win);
	wrefresh(win);
	if (reg[index]->getAttvita(input - '0').getName() != "* VUOTO *")
	{
		bool	selection = areYouSurePanel("Remove");
		if (selection == false)
		{
			closeWin(win);
			visualizzaMenu(reg, index);
		}
		else if (selection == true)
		{
			a.setName("* VUOTO *");
			a.setDescription("none");
			int selectIndex = static_cast<int>(input) - 48;
			reg[index]->deleteAttivita(selectIndex);
			reg[index]->addAttivita(a, selectIndex);
			wrefresh(win);
			closeWin(win);
			visualizzaMenu(reg, index);
		}
	}
	mvwprintw(win, 1, 2, "Nothing to eliminate");
	wgetch(win);
	closeWin(win);
	visualizzaMenu(reg, index);
}