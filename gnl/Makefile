# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 02:30:12 by asanz-ra          #+#    #+#              #
#    Updated: 2024/06/13 02:34:32 by asanz-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# Source files
SRCS = get_next_line.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
NAME = gnl.a

# Header name
INCLUDE = get_next_line.h

# Default target. Generate the executable.
all: $(NAME)

# Link object files into the executable.
# $^ means first prerequisite (OBJS). $@ means the target(NAME).
$(NAME): $(OBJS) $(INCLUDE)
	$(LIBA) $@ $(OBJS)



all:
	cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 get_next_line.c
