CFLAGS  = -Wall -Wextra -Werror
NAME    = libftprintf.a
AR		= ar -rcs
SRC		= \
	ft_printf.c
OBJ		= ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo Making the Library ✅ ✅
clean:
	@rm -rf *.o
	@echo Deleting all .o Files 🗑️ 🗑️
fclean: clean
	@rm -f $(NAME)
	@echo Deleting .a File 🗑️ 🗑️

%.o: %.c
	@gcc $(CFLAGS) -I libft.h -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re