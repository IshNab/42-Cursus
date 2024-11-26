NAME = output

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ := $(SRC:%.c=%.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
