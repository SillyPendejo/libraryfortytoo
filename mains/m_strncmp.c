#include <stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);
int main()
{
	char *s1 = "avc";
	char *s2 = "avd";
	size_t n = 3;
	printf("strncmp   : %d\nft_strncmp: %d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}
