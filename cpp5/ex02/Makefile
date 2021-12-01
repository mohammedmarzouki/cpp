NAME = forms

SRC =	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

all: $(NAME)

$(NAME): $(SRC)
		@clang++  -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
		@echo "cleaned"

fclean: clean
		@rm -rf $(NAME)

re: fclean all

PHONY: re clean fclean all