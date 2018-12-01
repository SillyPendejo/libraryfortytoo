NAME = libft

all: $(NAME)

$(NAME):
	@gcc -c ft_*.c
	@ar rc $(NAME).a ft_*.o
clean:
	@rm -f *.o
fclean: clean
	@rm -f *.a
re: fclean all