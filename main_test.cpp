#include <ncurses.h>

int main()
{
    initscr();
    refresh();
    noecho();
    WINDOW *menuwin = newwin(10, 40, 2, 4);
    box(menuwin, 0, 0);

    char choices[3][10] = {"Play", "Dashboard", "Setting"};
    int choice;
    int highlight = 0;

    keypad(menuwin, TRUE);
    int chociesLength = (sizeof(choices) / sizeof(*choices));
    while (1)
    {
        for (int i = 0; i < chociesLength; i++)
        {
            if (i == highlight)
            {
                wattron(menuwin, A_REVERSE);
                mvwprintw(menuwin, i + 1, 2, choices[i]);
                wattroff(menuwin, A_REVERSE);
            }
            else
            {
                mvwprintw(menuwin, i + 1, 2, choices[i]);
            }
        }
        wrefresh(menuwin);
        choice = wgetch(menuwin);

        switch (choice)
        {
        case KEY_UP:
            if (highlight > 0)
            {
                highlight--;
            }
            break;
        case KEY_DOWN:
            if (highlight < chociesLength - 1)
            {
                highlight++;
            }
            break;
        default:
            break;
        }

        if (choice == 10)
        {
            wclear(menuwin);
            box(menuwin, 0, 0);
            mvwprintw(menuwin, 1, 2, "Your Choice: %s", choices[highlight]);
            mvwprintw(menuwin, 3, 2, "back to menu -> press cancel");
            wrefresh(menuwin);
			
            while (1)
            {
                choice = wgetch(menuwin);
                if (choice == 263)
                    break;
            }
            wclear(menuwin);
            box(menuwin, 0, 0);
        }
    }

    endwin();
    return 0;
}


#include <ncurses.h>
#include <cstring>

// int main()
// {	
// 	initscr();			/* Start curses mode 		  */
// 	printw("Hello World !!!");	/* Print Hello World		  */
// 	refresh();			/* Print it on to the real screen */
// 	getch();		/* Wait for user input */
// 	endwin();			/* End curses mode		  */

// 	return 0;
// }


// int main()
// {
//     char mesg[]="Enter a string: ";		/* message to be appeared on the screen */
//     char str[80];
//     int row,col;				/* to store the number of rows and *    					 * the number of colums of the screen */
//     initscr();				/* start the curses mode */
//     getmaxyx(stdscr,row,col);		/* get the number of rows and columns */
//     mvprintw(row/2,(col-strlen(mesg))/2,"%s",mesg);
//                         		/* print the message at the center of the screen */
//     getstr(str);
//     mvprintw(LINES - 2, 0, "You Entered: %s", str);
//     getch();
//     endwin();   
//     return 0;
// }

#include <ncurses.h>

int main(int argc, char *argv[])
{	initscr();			/* Start curses mode 		*/
	start_color();			/* Start color functionality	*/
	
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("A Big string which i didn't care to type fully ");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);	
	/* 
	* First two parameters specify the position at which to start 
	* Third parameter number of characters to update. -1 means till 
	* end of line
	* Forth parameter is the normal attribute you wanted to give 
	* to the charcter
	* Fifth is the color index. It is the index given during init_pair()
	* use 0 if you didn't want color
	* Sixth one is always NULL 
	*/
	refresh();
		getch();
	endwin();			/* End curses mode		  */
	return 0;
}
