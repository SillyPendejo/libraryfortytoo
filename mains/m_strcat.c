#include <string.h>
#include <stdio.h>
char *ft_strcat(char *s1, char *s2);
int main()
{
	char a[7] = "abc";
	char b[7] = "abc";

	printf("s1: %s\n", a);
	printf("strcat   : %s\nft_strcat: %s\n", strcat(a, "def"), ft_strcat(b, "def"));
}
