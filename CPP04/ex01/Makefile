NAME = polymorphism

SRC = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

%.o: %.cpp
	@${CC} ${FLAGS} -c $< -o $@  


${NAME}: ${OBJ}
	@echo Compiling...
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}

all : ${NAME}

clean : 
	@${RM} *.o

fclean : clean
	@${RM} $(NAME)

re : fclean all

.PHONY : clean fclean re all