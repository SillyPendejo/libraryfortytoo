all:
	@read -p "Enter function name (w/o ft_ and .c): " func; \
	gcc -Wall -Werror -Wextra ft_$$func.c mains/m_$$func.c -o $$func.out
norm:
	@read -p "Enter function name (w/o ft_ and .c): " func; \
	norminette -R CheckForbiddenSourceHeader ft_$$func.c
clean:
	@read -p "Enter function name (w/o ft_ and .c): " func; \
	rm -f $$func.out
fclean:
	@rm -f *.out
