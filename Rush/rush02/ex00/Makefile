NAME = rush-02

MY_SOURCES = main.c parse.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(MY_OBJECTS)
	cc -o $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
