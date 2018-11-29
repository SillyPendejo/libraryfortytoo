#include <string.h>
#include <stdio.h>
//char *ft_strncat(char *s1, char *s2, size_t n);
int main()
{
	char a[50] = "abc\0";
//	char b[7] = "abc";

	printf("s1: %s\n", a);
	printf("strcat   : %lu %s\nft_strcat: \n", strlcat(a, "def\0", 4), a);
}
