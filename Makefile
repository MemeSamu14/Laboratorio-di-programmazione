NAME = Rinoceronte
TESTNAME = Test
SUPPRESSION_NAME = supp.supp
LOG_NAME = supp
CC = g++
CFLAGS = -g

SRC = main.cpp areYouSureMenu.cpp mainMenu.cpp noteMenu.cpp Registro.cpp Attivita/Attivita.cpp \
visualizzaMenu.cpp aggiungiMenu.cpp rimuoviMenu.cpp attivitaMenu.cpp


ATTIVITATESTSRC = Attivita/mainAttivitaTest.cpp Attivita/TestAttivita.cpp Attivita/Attivita.cpp

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC) -lncurses -lpanel

valTestAttivita:
	$(CC) -o $(TESTNAME) $(ATTIVITATESTSRC) -lncurses -lpanel && sudo valgrind ./$(TESTNAME)

TestAttivita:
	$(CC) -o $(TESTNAME) $(ATTIVITATESTSRC) -lncurses -lpanel && ./$(TESTNAME)

suppressions:
	sudo valgrind --leak-check=full --gen-suppressions=all --log-file="$(LOG_NAME)" ./$(NAME)
# 	sed -n '/{/,/}/p' $(LOG_NAME) > $(SUPPRESSION_NAME)
# 	rm -f $(LOG_NAME)

fclean:
	rm -f $(NAME) && rm -f $(TESTNAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re
