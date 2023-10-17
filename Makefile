# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 03:34:48 by slegaris          #+#    #+#              #
#    Updated: 2023/10/17 04:48:21 by slegaris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = random-num

SRC_DIR = src

SRCS = ptr_to_random.c\
	   utils.c\
	   
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)
	@echo "	  ██████  ██▓    ▓█████   ▄████  ▄▄▄       ██▀███   ██▓  ██████ "
	@echo "	▒██    ▒ ▓██▒    ▓█   ▀  ██▒ ▀█▒▒████▄    ▓██ ▒ ██▒▓██▒▒██    ▒ "
	@echo "	░ ▓██▄   ▒██░    ▒███   ▒██░▄▄▄░▒██  ▀█▄  ▓██ ░▄█ ▒▒██▒░ ▓██▄   "
	@echo "	  ▒   ██▒▒██░    ▒▓█  ▄ ░▓█  ██▓░██▄▄▄▄██ ▒██▀▀█▄  ░██░  ▒   ██▒"
	@echo "	▒██████▒▒░██████▒░▒████▒░▒▓███▀▒ ▓█   ▓██▒░██▓ ▒██▒░██░▒██████▒▒"
	@echo "	▒ ▒▓▒ ▒ ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓  ▒ ▒▓▒ ▒ ░"
	@echo "	░ ░▒  ░ ░░ ░ ▒  ░ ░ ░  ░  ░   ░   ▒   ▒▒ ░  ░▒ ░ ▒░ ▒ ░░ ░▒  ░ ░"
	@echo "	░  ░  ░    ░ ░      ░   ░ ░   ░   ░   ▒     ░░   ░  ▒ ░░  ░  ░  "
	@echo "		  ░      ░  ░   ░  ░      ░       ░  ░   ░      ░        ░  "
	@echo "			\033[0;36mCompilation of $(NAME) completed!\033[0m"

.c.o:
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
