NAME = ft_printf

LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = ft_printf.c \
	ft_char.c \
	ft_string.c \
	ft_int.c \
	ft_unsigned.c \
	ft_hexamin.c \
	ft_hexamaj.c \
	ft_hexalen.c \
	ft_pointer.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)/includes

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re