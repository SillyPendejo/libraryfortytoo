#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *s1);
int main()
{
	char *s1 = "000da02avc";
	printf("atoi   : %d\nft_atoi: %d\n", atoi(s1), ft_atoi(s1));
}
