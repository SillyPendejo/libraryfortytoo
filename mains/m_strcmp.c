#include <stdio.h>
#include <string.h>
int ft_strcmp(const char *s1, const char *s2);
int main()
{
	char *s1 = "";
	char *s2 = "a";
	printf("strcmp   : %d\nft_strcmp: %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
}
