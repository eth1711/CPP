NAME = phonebook

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

${NAME} : 
	@echo Compiling...
	@${CC} ${FLAGS} phonebook.cpp -o ${NAME}

all : ${NAME}

clean : 
	@${RM} $(NAME)

fclean : clean
	@${RM} $(NAME)

re : fclean all

.PHONY : clean fclean re all