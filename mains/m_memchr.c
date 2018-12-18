#include <stdio.h>
#include <string.h>
void *ft_memchr(void *b, int c, size_t len);

int		main()
{
	char a[] = "abc";
	printf("string: %s\n", a);
	printf("memchr   : %s\nft_memchr: %s\n", memchr(a, 'd', 3), ft_memchr(a, 'd', 3));
}
