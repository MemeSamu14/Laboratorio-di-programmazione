#include "includes.h"

void	daysMenu(WINDOW *note, char input, int *selection)
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


// int	drawRegisterMenu(WINDOW *regMen, Registro **reg)
// {
// 	// box(regMen, 0, 0);
// 	// mvwprintw(regMen, 1, 2, reg->getGiorno().c_str());
// 	box(regMen, 0, 0);

	
// }

void	registerMenu(int index, Registro **reg)
{
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW *regMen = newwin(15, 25, yMax / 4 , xMax / 3);
	char	input;
	int		selection = VISUALIZZA - 1;
	box(regMen, 0, 0);
	wattron(regMen, A_BOLD);
	mvwprintw(regMen, 1, 2, reg[index]->getGiorno().c_str());
	wattroff(regMen, A_BOLD);
	mvwprintw(regMen, 5, 2, "Vedi Lista Attivita");
	mvwprintw(regMen, 7, 2, "Aggiungi Attivita");
	mvwprintw(regMen, 9, 2, "Rimuovi Attivita");
	mvwprintw(regMen, 11, 2, "<- Indietro");
	while (input = wgetch(regMen))
	{		
		if (input == '	')
		{
			selection++;
			if (selection == 18)
				selection = VISUALIZZA;
			if (selection == VISUALIZZA)
			{
				wattron(regMen, A_BOLD);
				mvwprintw(regMen, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(regMen, A_BOLD);
				wattron(regMen, A_STANDOUT);
				mvwprintw(regMen, 5, 2, "Vedi Lista Attivita");
				wattroff(regMen, A_STANDOUT);
				mvwprintw(regMen, 7, 2, "Aggiungi Attivita");
				mvwprintw(regMen, 9, 2, "Rimuovi Attivita");
				mvwprintw(regMen, 11, 2, "<- Indietro");
			}
			else if (selection == AGGIUNGI)
			{
				wattron(regMen, A_BOLD);
				mvwprintw(regMen, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(regMen, A_BOLD);
				mvwprintw(regMen, 5, 2, "Vedi Lista Attivita");
				wattron(regMen, A_STANDOUT);
				mvwprintw(regMen, 7, 2, "Aggiungi Attivita");
				wattroff(regMen, A_STANDOUT);
				mvwprintw(regMen, 9, 2, "Rimuovi Attivita");
				mvwprintw(regMen, 11, 2, "<- Indietro");
			}
			else if (selection == ELIMINA)
			{
				wattron(regMen, A_BOLD);
				mvwprintw(regMen, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(regMen, A_BOLD);
				mvwprintw(regMen, 5, 2, "Vedi Lista Attivita");
				mvwprintw(regMen, 7, 2, "Aggiungi Attivita");
				wattron(regMen, A_STANDOUT);
				mvwprintw(regMen, 9, 2, "Rimuovi Attivita");
				wattroff(regMen, A_STANDOUT);
				mvwprintw(regMen, 11, 2, "<- Indietro");
			}
			else if (selection == BACK)
			{
				wattron(regMen, A_BOLD);
				mvwprintw(regMen, 1, 2, reg[index]->getGiorno().c_str());
				wattroff(regMen, A_BOLD);
				mvwprintw(regMen, 5, 2, "Vedi Lista Attivita");
				mvwprintw(regMen, 7, 2, "Aggiungi Attivita");
				mvwprintw(regMen, 9, 2, "Rimuovi Attivita");
				wattron(regMen, A_STANDOUT);
				mvwprintw(regMen, 11, 2, "<- Indietro");
				wattroff(regMen, A_STANDOUT);
			}
			wrefresh(regMen);
		}
	}
}


void	noteMenu(WINDOW *win, Registro **reg)
{
	wrefresh(win);
	int	yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW *note = newwin(17, 13, yMax / 4 , xMax / 2);
	getmaxyx(note, yMax, xMax);
	int	noteSelection = LUNEDI - 1;
	char	input = LUNEDI - 1;
	int		option;
	daysMenu(note, input, &noteSelection);
	while (input = wgetch(note))
	{
		daysMenu(note, input, &noteSelection);
		if (input == 10)
		{
			if (noteSelection >= LUNEDI && noteSelection <= DOMENICA)
			{
				wclear(note);
				wrefresh(note);
				registerMenu(noteSelection - LUNEDI, reg);
				
			}
			else if (INDIETRO)
			{
				wclear(note);
				wrefresh(note);
				mainLoop(win, yMax, xMax, reg);
			}
		}
	}
}

