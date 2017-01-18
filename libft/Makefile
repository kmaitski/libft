NAME = libft.a

SRC = srcs/part_2/*.c srcs/part_1/*.c

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
