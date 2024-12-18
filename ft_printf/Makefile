# Name of the library
NAME = libftprintf.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.  # Include current directory for headers

# Source files
SRCS =	ft_printf.c helper_functions.c hex_functions.c unsigned_functions.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default rule to compile the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to compile and run main.c
run: $(NAME)
	$(CC) $(CFLAGS) -o main main.c $(NAME)
	./main

# Clean rule to remove object files
clean:
	rm -f $(OBJS)

# Fclean rule to remove object files and the executable
fclean: clean
	rm -f $(NAME) main

# Rule to clean and recompile everything
re: fclean all

# Phony targets to prevent conflicts with files
.PHONY: all clean fclean re
