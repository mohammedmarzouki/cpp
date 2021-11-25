NAME = fragtrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all: ${NAME}

${NAME}: ${SRCS}
	clang++ -std=c++98 -Wall -Wextra -Werror ${SRCS} -o ${NAME}

clean:
	@echo "nothing to be cleaned"

fclean: clean
	@rm -f ${NAME}

re: fclean all
