#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *s1);
int main(int c, char **v)
{
	if (c == 2)
		printf("atoi   : %d\nft_atoi: %d\n", atoi(v[1]), ft_atoi(v[1]));
}
