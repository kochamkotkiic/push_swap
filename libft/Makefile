# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurbane <emurbane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/25 15:43:43 by emurbane          #+#    #+#              #
#    Updated: 2025/11/07 15:45:51 by emurbane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

# --- Libft core files ---
FILES = ft_substr.c ft_putnbr_fd.c ft_isdigit.c ft_atoi.c ft_isalpha.c \
		ft_memmove.c ft_isprint.c ft_memchr.c ft_striteri.c ft_putendl_fd.c \
		ft_strmapi.c ft_strrchr.c ft_toupper.c ft_memset.c ft_itoa.c \
		ft_isalnum.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_strjoin.c \
		ft_strlcat.c ft_strdup.c ft_memcmp.c ft_memcpy.c ft_bzero.c ft_tolower.c \
		ft_strchr.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlen.c \
		ft_calloc.c ft_isascii.c ft_split.c

# --- Bonus list functions ---
BONUS_FILES = ft_lstsize.c ft_lstnew.c ft_lstlast.c \
		ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c \
		ft_lstiter.c ft_lstmap.c

# --- printf files ---
PRINTF_FILES = ft_printf.c ft_printf_c.c ft_printf_d.c ft_printf_p.c \
				ft_printf_s.c ft_printf_u.c ft_printf_x.c ft_printf_X.c

# --- get_next_line files ---
GNL_FILES = get_next_line.c get_next_line_utils.c

# --- Objects ---
OBJ = $(FILES:.c=.o) $(PRINTF_FILES:.c=.o) $(GNL_FILES:.c=.o)
BONUS_OBJ = $(BONUS_FILES:.c=.o)

# --- Rules ---
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
