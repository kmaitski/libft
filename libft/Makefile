NAME = libft.a

SRC = srcs/*.c

OFILES = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) -Iincludes
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
	rm -f $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all
