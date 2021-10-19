NAME = phone

SRCS = main.cpp contact.cpp phonebook.cpp

$(NAME):$(SRCS)
	clang++ -std=c++98 -Wall -Wextra -Werror $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@echo "nothing to be cleaned"

fclean:
	@rm -rf $(NAME)

re : fclean all