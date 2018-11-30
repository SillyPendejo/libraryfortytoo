#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_isascii(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("isascii   : %d\nft_isascii: %d\n", isascii(argv[1][0]), ft_isascii(argv[1][0]));
}
