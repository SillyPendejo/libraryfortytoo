#include <string.h>
#include <stdio.h>
char *ft_strstr(const char *s, const char *s2);
int main()
{
	printf("strstr   : %s\nft_strstr: %s\n", strstr("kel", "\0"), ft_strstr("kel", "\0"));
}
