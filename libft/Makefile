NAME = libft.a

SRC = *.c

OFILES = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -Iincludes
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all
