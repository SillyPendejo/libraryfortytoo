#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_isdigit(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("isdigit   : %d\nft_isdigit: %d\n", isdigit(argv[1][0]), ft_isdigit(argv[1][0]));
}
