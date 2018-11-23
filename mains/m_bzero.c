#include <stdio.h>
#include <string.h>
void *ft_bzero(void *b, size_t len);

int		main()
{
	char a[4] = "abc\0";
	char fta[4] = "abc\0";
	printf("a: %s\nft a: %s\n", a, fta);
	bzero(a, 1);
	ft_bzero(fta, 1);
	printf("bzero   : %s\nft_bzero: %s\n", a, fta);
}
