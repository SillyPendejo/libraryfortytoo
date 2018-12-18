#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n);

int		main()
{
	char a[50];
	char *fa;
	char *fb;
	char *b;
	size_t i;

	i = 0;
	bzero(a, 50);
	b = "12345";
	fb = b;
	fa = a;
	printf("dst   : %s\nsrc   : %s\ni: %d\n", a, b, (int)i);
	printf("ft_dst: %s\nsrc_ft: %s\n", a, b);
	printf("memcpy return value   : %s\n", memcpy(a, b, i));
	printf("ft_memcpy return value: %s\n", ft_memcpy(fa, fb, i));
	printf("memcpy dst   : %s\nft_memcpy dst: %s\n", a, fa);
}
