#include <stdio.h>
#include <string.h>

int		main()
{
	char a[4] = "abc\0";
	char fta[4] = "abc\0";
	int i = 200;
	printf("a: %s\nft a: %s\n", a, fta);
	memset(a, i, 2);
	ft_memset(fta, i, 2);
	printf("%s", a);
}
