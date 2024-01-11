# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCSDIR = handin
SRCS = split_main.c

# Object files
OBJSDIR = objs
OBJS = $(SRCS:%.c=$(OBJSDIR)/%.o)

# Header files
LIBSDIR = handin
LIBS = $(LIBSDIR)/libft.h

# Executable binary name
BINDIR = bin
NAME = $(BINDIR)/outputProgram

# Default target. Generate the executable.
all: $(NAME)

# Link object files into the executable.
# $^ means all prerequisites (OBJS). $@ means the target(NAME).
$(NAME): $(OBJS) $(LIBS) | $(BINDIR)
	@$(CC) $(CFLAGS) -o $@ $< -L$(LIBSDIR) -lft
	@echo Made bin

# Compile a .c file into a needed .o object file.
# This is called when any .o file is needed. That is the meaning of %,
# which is called a wildcard, it could be anything, compiling %.c into %.o.
# %< means the first prerequisite (%.c)
$(OBJSDIR)/%.o: $(SRCSDIR)/%.c | $(OBJSDIR)
	@$(CC) $(CFLAGS) -I$(LIBSDIR) -c $< -o $@
	@echo Made .o files

$(OBJSDIR) $(BINDIR):
	@mkdir -p $@

# A function isn't run if a file with the name exists in the current directory.
# This is UNLESS we made changes to its prerequisites(recursively). I.e. if
# NAME exists, we NORMALLY don't recompile it again. Every command included as
# a prerequisite in .PHONY will run even if a file with that name exists.
.PHONY: clean fclean re

# Clean up generated intermediate files
clean:
	@rm -rf $(OBJSDIR)

# Clean up all files generated.
fclean: clean
	@rm -rf $(BINDIR)

# Recompile. Clean up all files and recompile executable.
re: fclean all
