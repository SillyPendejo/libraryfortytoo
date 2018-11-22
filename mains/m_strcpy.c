#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dst, const char *src);
int		main(int argc, char **argv)
{
	char *a;
	char *dst1;
	char *dst2;

	if (argc == 2 || argc == 1)
	{
		if (argc == 2)
			a = argv[1];
		if (argc == 1)
			a = "";
		dst1 = ft_strcpy(dst1, a);
		dst2 = strcpy(dst2, a);
		printf("argv[1]: %s\nstrcpy: %s | ft_strcpy: %s\n", a, dst2, dst1);
	}
	else
		printf("Too many args.");
}
