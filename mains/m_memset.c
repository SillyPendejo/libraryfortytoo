#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len);

int		main()
{
	char a[4] = "abc\0";
	char fta[4] = "abc\0";
	int i = -200;
	printf("a: %s\nft a: %s\n", a, fta);
	memset(a, i, 1);
	ft_memset(fta, i, 1);
	printf("memset   : %s\nft_memset: %s\n", a, fta);
}
