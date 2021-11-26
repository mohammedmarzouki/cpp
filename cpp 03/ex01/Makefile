NAME = scavtrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

all: ${NAME}

${NAME}: ${SRCS}
	clang++ -std=c++98 -Wall -Wextra -Werror ${SRCS} -o ${NAME}

clean:
	@echo "all cleaned"

fclean: clean
	@rm -f ${NAME}

re: fclean all
