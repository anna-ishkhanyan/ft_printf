NAME	=	libftprintf.a

HEADER = ft_printf.h

LIBFTDIR = libft
LIBFTNAME = libft.a

SRC	=	ft_printf.c	ft_print_hex.c ft_print_pointer.c ft_printf_ui.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

%.o : %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) $@
	@ar -rcs $@ $(OBJ)
	@ranlib $@

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	@make -C $(LIBFTDIR) clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C $(LIBFTDIR) fclean		

re:	fclean all

.PHONY:	all clean fclean re
