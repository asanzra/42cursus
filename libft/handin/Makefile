# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Archive (lib) creator
LIBA = ar rcs

# Source files
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c
BONUSSCRS =  

# Object files
OBJS = $(SRCS:.c=.o)
BONUSOBJS = $(BONUSSRCS:.c=.o)

# Executable name
NAME = libft.a

# Header name
INCLUDE = libft.h

# Default target. Generate the executable.
all: $(NAME)

# Link object files into the library.
# $^ means first prerequisite (OBJS). $@ means the target(NAME).
$(NAME): $(OBJS) $(INCLUDE)
	$(LIBA) $@ $(OBJS)

# Link objects into bonus library
bonus: $(OBJS) $(BONUSOBJS) $(INCLUDE)
	$(LIBA) $(NAME) $(OBJS) $(BONUSOBJS)

# Compile a .c file into a needed .o object file.
# This is called when any .o file is needed. That is the meaning of %,
# which is called a wildcard, it could be anything, compiling %.c into %.o.
# $< means all prerequisites (%.c)
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# A function isn't run if a file with the name exists in the current directory.
# This is UNLESS we made changes to its prerequisites(recursively). I.e. if
# NAME exists, we NORMALLY don't recompile it again. Every command included as
# a prerequisite in .PHONY will run even if a file with that name exists.
.PHONY: clean fclean re

# Clean up generated intermediate files
clean:
	rm -rf $(OBJS) $(BONUSOBJS)

# Clean up all files generated.
fclean: clean
	rm -rf $(NAME)

# Recompile. Clean up all files and recompile executable.
re: fclean all
rebonus: fclean bonus