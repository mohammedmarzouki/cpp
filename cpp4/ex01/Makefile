NAME = animals

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

all: ${NAME}

${NAME}: ${SRCS}
	clang++ -std=c++98 -Wall -Wextra -Werror ${SRCS} -o ${NAME}

clean:
	@echo "all cleaned"

fclean: clean
	@rm -f ${NAME}

re: fclean all
