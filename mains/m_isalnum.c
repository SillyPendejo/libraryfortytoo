#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_isalnum(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("isalnum   : %d\nft_isalnum: %d\n", isalnum(argv[1][0]), ft_isalnum(argv[1][0]));
}
