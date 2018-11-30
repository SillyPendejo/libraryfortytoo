#include <string.h>
#include <stdio.h>
char *ft_strchr(char *s, int c);
int main()
{
	printf("strchr   : %s\nft_strchr: %s\n", strchr("kel", '\0'), ft_strchr("kel", '\0'));
}
