NAME = notes
TESTNAME = Test
SUPPRESSION_NAME = supp.supp
LOG_NAME = supp
CXX = c++
CFLAGS = -g
OBJ_DIR = obj
SRC = main.cpp menu/areYouSureMenu.cpp menu/mainMenu.cpp menu/noteMenu.cpp Registro.cpp Attivita/Attivita.cpp \
menu/visualizzaMenu.cpp menu/aggiungiMenu.cpp menu/rimuoviMenu.cpp menu/attivitaMenu.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.cpp=.o)))

ATTIVITATESTSRC = AttivitaTest.cpp Attivita.cpp
ATTIVITATESTOBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(ATTIVITATESTSRC:.cpp=.o)))
ATTIVITAFLAGS = -I/usr/local/include -L/usr/local/lib -lgtest -lgtest_main -pthread


REGISTROTESTSRC = RegistroTest.cpp Registro.cpp ../Attivita/Attivita.cpp
REGISTROTESTOBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(REGISTROTESTSRC:.cpp=.o)))
REGISTROFLAGS = -I/usr/local/include -L/usr/local/lib -lgtest -lgtest_main -pthread


$(NAME): $(OBJ_DIR) $(OBJ)
	$(CXX) -o $(NAME) $(CFLAGS) $(OBJ) -lncurses -lpanel

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: Attivita/%.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: Registro/%.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: menu/%.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

TestAttivita: $(OBJ_DIR) $(ATTIVITATESTOBJ)
	$(CXX) $(ATTIVITATESTOBJ) -o Attivita/$(TESTNAME) $(ATTIVITAFLAGS)
	./Attivita/$(TESTNAME)

TestRegistro: $(OBJ_DIR) $(REGISTROTESTOBJ)
	$(CXX) $(REGISTROTESTOBJ) -o Registro/$(TESTNAME) $(REGISTROFLAGS)
	./Registro/$(TESTNAME)

run:
	./$(NAME)

suppressions:
	valgrind --leak-check=full --show-leak-kinds=all --suppressions=$(SUPPRESSION_NAME) ./$(NAME)

fclean:
	rm -rf $(OBJ_DIR) $(NAME) Attivita/$(TESTNAME) Registro/$(TESTNAME)

re: fclean $(NAME)

.PHONY: all clean fclean re