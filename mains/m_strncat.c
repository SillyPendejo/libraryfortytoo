#include <string.h>
#include <stdio.h>
char *ft_strncat(char *s1, char *s2, size_t n);
int main()
{
	char a[7] = "abc";
	char b[7] = "abc";

	printf("s1: %s\n", a);
	printf("strcat   : %s\nft_strcat: %s\n", strncat(a, "def", 0), ft_strncat(b, "def", 0));
}
