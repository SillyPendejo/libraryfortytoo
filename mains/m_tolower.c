#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_tolower(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("tolower   : %c\nft_tolower: %c\n", tolower(argv[1][0]), ft_tolower(argv[1][0]));
}
