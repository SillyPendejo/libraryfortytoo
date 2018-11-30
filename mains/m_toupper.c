#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_toupper(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("toupper   : %c\nft_toupper: %c\n", toupper(argv[1][0]), ft_toupper(argv[1][0]));
}
