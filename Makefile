NAME = Rinoceronte

CC = g++
CFLAGS = -g

SRC = main.cpp

all: $(NAME) 

$(UTILS):
	$(MAKE) -C $(UTILS_DIR)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC) -lncurses -lpanel

clean:
	rm -f

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re
