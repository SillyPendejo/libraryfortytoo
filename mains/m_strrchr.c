#include <string.h>
#include <stdio.h>
char *ft_strrchr(char *s, int c);
int main()
{
	printf("strrchr   : %s\nft_strrchr: %s\n", strrchr("kelel", 'a'), ft_strrchr("kelel", 'a'));
}
