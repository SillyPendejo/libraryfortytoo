#include <stdio.h>
#include <string.h>
char	*ft_strdup(const char *s);
int		main(int argc, char **argv)
{
	char *a;

	if (argc == 2 || argc == 1)
	{
		if (argc == 2)
			a = argv[1];
		if (argc == 1)
			a = "";
		printf("argv[1]: %s\nstrdup: %s | ft_strdup: %s\n", a, strdup(a), ft_strdup(a));
	}
	else
		printf("Too many args.");
}
