NAME = phonebook

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

${NAME} : 
	@echo Compiling...
	@${CC} ${FLAGS} main.cpp -o ${NAME}
	@echo Compiling Done!

all : ${NAME}

clean : 
	@${RM} $(NAME)

fclean : clean
	@${RM} $(NAME)

re : fclean all

.PHONY : clean fclean re all