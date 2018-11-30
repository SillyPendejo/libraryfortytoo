#include <string.h>
#include <stdio.h>
char *ft_strnstr(const char *s, const char *s2, size_t len);
int main()
{
	printf("strnstr   : %s\nft_strnstr: %s\n", strnstr("kel", "el", -1), ft_strnstr("kel", "el", -1));
}
