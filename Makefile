NAME = Rinoceronte
TESTNAME = Test

CC = g++
CFLAGS = -g

SRC = main_menu.cpp

ATTIVITATESTSRC = Attivita/mainAttivitaTest.cpp Attivita/TestAttivita.cpp Attivita/Attivita.cpp

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC) -lncurses -lpanel

valTestAttivita:
	$(CC) -o $(TESTNAME) $(ATTIVITATESTSRC) -lncurses -lpanel && sudo valgrind ./$(TESTNAME)

TestAttivita:
	$(CC) -o $(TESTNAME) $(ATTIVITATESTSRC) -lncurses -lpanel && ./$(TESTNAME)

fclean:
	rm -f $(NAME) && rm -f $(TESTNAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re
