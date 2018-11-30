#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int ft_isprint(int c);
int main(int argc, char **argv)
{
	if (argc == 2)
		printf("isprint   : %d\nft_isprint: %d\n", isprint(atoi(argv[1])), ft_isprint(atoi(argv[1])));
}
