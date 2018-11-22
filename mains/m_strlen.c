#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *s);
int		main(int argc, char **argv)
{
	char *a;

	if (argc == 2 || argc == 1)
	{
		if (argc == 2)
			a = argv[1];
		if (argc == 1)
			a = "";
		//strlen also results in a segfault in case of null input
		printf("argv[1]: %s\nstrlen: %lu | ft_strlen: %lu\n", a, strlen(a), ft_strlen(a));
	}
	else
		printf("Too many args.");
}
