#include "includes.h"

void	displayDay(WINDOW *note, char input, int *selection)
{
	box(note, 0, 0);
	if ((*selection) == LUNEDI - 1)
	{
		mvwprintw(note, 1, 2, "Lunedi");
		mvwprintw(note, 3, 2, "Martedi");
		mvwprintw(note, 5, 2, "Mercoledi");
		mvwprintw(note, 7, 2, "Giovedi");
		mvwprintw(note, 9, 2, "Venerdi");
		mvwprintw(note, 11, 2, "Sabato");
		mvwprintw(note, 13, 2, "Domenica");
		mvwprintw(note, 15, 1, "<- indietro");
	}
	if (input == '	')
	{
		(*selection)++;
		if ((*selection) == 14)
			(*selection) = LUNEDI;
		if ((*selection) == LUNEDI)
		{
			wattron(note, A_STANDOUT);
			mvwprintw(note, 1, 2, "Lunedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == MARTEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 3, 2, "Martedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == MERCOLEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 5, 2, "Mercoledi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == GIOVEDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 7, 2, "Giovedi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == VENERDI)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 9, 2, "Venerdi");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == SABATO)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 11, 2, "Sabato");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 13, 2, "Domenica");
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == DOMENICA)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 13, 2, "Domenica");
			wattroff(note, A_STANDOUT);
			mvwprintw(note, 15, 1, "<- indietro");
		}
		else if ((*selection) == INDIETRO)
		{
			mvwprintw(note, 1, 2, "Lunedi");
			mvwprintw(note, 3, 2, "Martedi");
			mvwprintw(note, 5, 2, "Mercoledi");
			mvwprintw(note, 7, 2, "Giovedi");
			mvwprintw(note, 9, 2, "Venerdi");
			mvwprintw(note, 11, 2, "Sabato");
			mvwprintw(note, 13, 2, "Domenica");
			wattron(note, A_STANDOUT);
			mvwprintw(note, 15, 1, "<- indietro");
			wattroff(note, A_STANDOUT);
		}
		wrefresh(note);
	}
}


// int	drawRegisterMenu(WINDOW *win, Registro **reg)
// {
// 	// box(win, 0, 0);
// 	// mvwprintw(win, 1, 2, reg->getGiorno().c_str());
// 	box(win, 0, 0);

	
// }

void	registerMenu(int index, Registro **reg)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *win = newwin(13, 25, yMax / 4 , xMax / 3);
	char	input;
	int		selection = VISUALIZZA - 1;
	box(win, 0, 0);
	wattron(win, A_BOLD);
	mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
	wattroff(win, A_BOLD);
	mvwprintw(win, 5, 2, "Vedi Lista Attivita");
	mvwprintw(win, 7, 2, "Aggiungi Attivita");
	mvwprintw(win, 9, 2, "Rimuovi Attivita");
	mvwprintw(win, 11, 2, "<- Indietro");
	while (input = wgetch(win))
	{		
		if (input == '	')
		{
			selection++;
			if (selection == 18)
				selection = VISUALIZZA;
			if (selection == VISUALIZZA)
			{
				wattron(win, A_BOLD);
				mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(win, A_BOLD);
				wattron(win, A_STANDOUT);
				mvwprintw(win, 5, 2, "Vedi Lista Attivita");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, 7, 2, "Aggiungi Attivita");
				mvwprintw(win, 9, 2, "Rimuovi Attivita");
				mvwprintw(win, 11, 2, "<- Indietro");
			}
			else if (selection == AGGIUNGI)
			{
				wattron(win, A_BOLD);
				mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(win, A_BOLD);
				mvwprintw(win, 5, 2, "Vedi Lista Attivita");
				wattron(win, A_STANDOUT);
				mvwprintw(win, 7, 2, "Aggiungi Attivita");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, 9, 2, "Rimuovi Attivita");
				mvwprintw(win, 11, 2, "<- Indietro");
			}
			else if (selection == ELIMINA)
			{
				wattron(win, A_BOLD);
				mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(win, A_BOLD);
				mvwprintw(win, 5, 2, "Vedi Lista Attivita");
				mvwprintw(win, 7, 2, "Aggiungi Attivita");
				wattron(win, A_STANDOUT);
				mvwprintw(win, 9, 2, "Rimuovi Attivita");
				wattroff(win, A_STANDOUT);
				mvwprintw(win, 11, 2, "<- Indietro");
			}
			else if (selection == BACK)
			{
				wattron(win, A_BOLD);
				mvwprintw(win, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(win, A_BOLD);
				mvwprintw(win, 5, 2, "Vedi Lista Attivita");
				mvwprintw(win, 7, 2, "Aggiungi Attivita");
				mvwprintw(win, 9, 2, "Rimuovi Attivita");
				wattron(win, A_STANDOUT);
				mvwprintw(win, 11, 2, "<- Indietro");
				wattroff(win, A_STANDOUT);
			}
			wrefresh(win);
		}
		else if (input == 10)
		{
			if (selection == VISUALIZZA)
			{
				// viusalizza menu
				// closeWin(win);
				closeWin(win);
				visualizzaMenu(reg, index);
			}
			else if (selection == AGGIUNGI)
			{
				// aggiungi menu
			}
			else if (selection == ELIMINA)
			{
				// elimina menu
			}
			else if (selection == BACK)
			{
				closeWin(win);
				noteMenu(reg);
			}
		}
	}
}


void	noteMenu(Registro **reg)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW *note = newwin(17, 13, yMax / 4 , xMax / 2);
	getmaxyx(note, yMax, xMax);
	int	noteSelection = LUNEDI - 1;
	char	input = LUNEDI - 1;
	int		option;
	displayDay(note, input, &noteSelection);
	while (input = wgetch(note))
	{
		displayDay(note, input, &noteSelection);
		if (input == 10)
		{
			if (noteSelection >= LUNEDI && noteSelection <= DOMENICA)
			{
				closeWin(note);
				registerMenu(noteSelection - LUNEDI, reg);
			}
			else if (noteSelection == INDIETRO)
			{
				closeWin(note);
				mainLoop(reg);
			}
		}
	}
}

