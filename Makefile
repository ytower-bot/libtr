NAME = libft.a

SRC_DIR = src/

INCLUDE = includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I $(INCLUDE)

LIBFT_SRC = ft_memset.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_isspace.c ft_toupper.c ft_tolower.c ft_strmapi.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_free_split.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
			ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstiter.c ft_lstmap.c ft_lstlast.c \
			get_next_line.c get_next_line_utils.c \
			ft_printf.c ft_putstr.c ft_lxtoa.c ft_utoa.c ft_strupper.c

SRC = $(addprefix $(SRC_DIR), $(LIBFT_SRC))

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
