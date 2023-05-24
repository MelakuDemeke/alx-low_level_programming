CC = gcc
SRC = main.c file1.c file2.c
OBJ = $(SRC:.c=.o)
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

.PHONY: all clean oclean fclean re

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) *~ *.swp $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all

%.o: %.c m.h
	$(CC) $(CFLAGS) -c -o $@ $<
