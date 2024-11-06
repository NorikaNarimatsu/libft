
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES =  $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)


AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR)  $(NAME) $(OBJECTS)

$(OBJECTS):	%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
