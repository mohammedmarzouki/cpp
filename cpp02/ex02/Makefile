NAME = fixed

SRC = main.cpp Fixed.cpp

$(NAME) : $(SRC)
	clang++ -std=c++98 -Wall -Wextra -Werror $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "nothing to be cleaned"

fclean:
	@rm $(NAME)

re: fclean all