#include <stdio.h>
#include <string.h>
void *ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main()
{
	char a[50];
	char *fa;
	char *fb;
	char *b;
	size_t n;

	n = 30;
	b = "This is a test: a good one!" ;
	bzero(a, 50);
	fb = b;
	fa = a;
	printf("dst   : %s\nsrc   : %s\nn: %d\n", a, b, (int)n);
	printf("ft_dst: %s\nsrc_ft: %s\n", a, b);
	memccpy(NULL, NULL, ':', n);
	ft_memccpy(fa, fb, ':', n);
	printf("memcpy dst   : %s\nft_memcpy dst: %s\n", a, fa);
}
