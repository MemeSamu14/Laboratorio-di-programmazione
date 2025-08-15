#include "includes.h"

void	printVisualizzaMenu(WINDOW * win, Registro **reg, int index, int selection)
{
	wattron(win, A_BOLD);
	mvwprintw(win, 1, 2, "%s", reg[index]->getGiorno().c_str());
	wattroff(win, A_BOLD);
	if (selection == 1)
	{
		wattron(win, A_STANDOUT);
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 2)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 3)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 4)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 5)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 6)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 7)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 8)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 9)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 10)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 10)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 30, 2, "<- Indietro");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
	}
	else if (selection == 11)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		wattron(win, A_STANDOUT);
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 12)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		wattron(win, A_STANDOUT);
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		wattroff(win, A_STANDOUT);
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	else if (selection == 13)
	{
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		wattron(win, A_STANDOUT);
		mvwprintw(win, 30, 2, "<- Indietro");
		wattroff(win, A_STANDOUT);
	}
	else
	{
		box(win, 0, 0);
		wattron(win, A_BOLD);
		mvwprintw(win, 1, 2, "%s", reg[index]->getGiorno().c_str());
		wattroff(win, A_BOLD);
		mvwprintw(win, 4, 2, " 1) %s", reg[index]->getAttvita(0).getName().c_str());
		mvwprintw(win, 6, 2, " 2) %s", reg[index]->getAttvita(1).getName().c_str());
		mvwprintw(win, 8, 2, " 3) %s", reg[index]->getAttvita(2).getName().c_str());
		mvwprintw(win, 10, 2, " 4) %s", reg[index]->getAttvita(3).getName().c_str());
		mvwprintw(win, 12, 2, " 5) %s", reg[index]->getAttvita(4).getName().c_str());
		mvwprintw(win, 14, 2, " 6) %s", reg[index]->getAttvita(5).getName().c_str());
		mvwprintw(win, 16, 2, " 7) %s", reg[index]->getAttvita(6).getName().c_str());
		mvwprintw(win, 18, 2, " 8) %s", reg[index]->getAttvita(7).getName().c_str());
		mvwprintw(win, 20, 2, " 9) %s", reg[index]->getAttvita(8).getName().c_str());
		mvwprintw(win, 22, 2, "10) %s", reg[index]->getAttvita(9).getName().c_str());
		mvwprintw(win, 25, 3, "Aggiungi Attivita'");
		mvwprintw(win, 27, 3, "Rimuovi Attivita'");
		mvwprintw(win, 30, 2, "<- Indietro");
	}
	wrefresh(win);
}

void	visualizzaMenu(Registro **reg, int index)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(32, 30, yMax / 4 , xMax / 3);
	char	input;
	int		selection = 0;
	printVisualizzaMenu(win, reg, index, selection);
	while (input = wgetch(win))
	{		
		if (input == '	')
		{
			selection++;
			if (selection == 14)
				selection = 1;
			printVisualizzaMenu(win, reg, index, selection);
		}
		else if (input == 10)
		{
			if (selection == 11)
			{
				closeWin(win);
				aggiungiMenu(reg, index);
			}
			if (selection == 13)
			{
				closeWin(win);
				registerMenu(index, reg);
			}
		}
	}
	wrefresh(win);
}


/*
	start_color();
	
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("A Big string which i didn't care to type fully ");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);	
*/