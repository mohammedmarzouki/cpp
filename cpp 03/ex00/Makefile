NAME = claptrap

SRCS = main.cpp ClapTrap.cpp

all: ${NAME}

${NAME}: ${SRCS}
	clang++ -std=c++98 -Wall -Wextra -Werror ${SRCS} -o ${NAME}

clean:
	@echo "all cleaned"

fclean: clean
	@rm -f ${NAME}

re: fclean all
