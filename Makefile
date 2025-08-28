NAME = notes
TESTNAME = Test
SUPPRESSION_NAME = supp.supp
LOG_NAME = supp
CXX = c++
CFLAGS = -g

SRC = main.cpp areYouSureMenu.cpp mainMenu.cpp noteMenu.cpp Registro.cpp Attivita/Attivita.cpp \
visualizzaMenu.cpp aggiungiMenu.cpp rimuoviMenu.cpp attivitaMenu.cpp


ATTIVITATESTSRC = AttivitaTest.cpp Attivita.cpp

ATTIVITAFLAGS = -o Test -I/usr/local/include -L/usr/local/lib -lgtest -lgtest_main -pthread

$(NAME): $(SRC)
	$(CXX) -o $(NAME) $(CFLAGS) $(SRC) -lncurses -lpanel

TestAttivita:
	cd Attivita && $(CXX) -o $(TESTNAME) $(ATTIVITATESTSRC) $(ATTIVITAFLAGS) && ./$(TESTNAME)

suppressions:
	sudo valgrind --leak-check=full --gen-suppressions=all --log-file="$(LOG_NAME)" ./$(NAME)
# 	sed -n '/{/,/}/p' $(LOG_NAME) > $(SUPPRESSION_NAME)
# 	rm -f $(LOG_NAME)

fclean:
	rm -f $(NAME) && rm -f $(TESTNAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re
