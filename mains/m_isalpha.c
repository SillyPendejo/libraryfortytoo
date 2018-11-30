#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_isalpha(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("isalpha   : %d\nft_isalpha: %d\n", isalpha(atoi(argv[1])), ft_isalpha(atoi(argv[1])));
}
