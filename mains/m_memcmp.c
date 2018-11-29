#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int ft_memcmp(char *s1, char *s2, size_t n);
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("memcmp   : %d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
		printf("ft_memcmp: %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	}
}
