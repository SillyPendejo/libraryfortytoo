#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dst, const char *src);
int		main(int argc, char **argv)
{
	char dst1[50];
	char dst2[50];

	if (argc == 2 || argc == 1)
	{
		if (argc == 2)
		{
			ft_strcpy(dst1, argv[1]);
			strcpy(dst2, argv[1]);
		}
		if (argc == 1)
		{
			ft_strcpy(dst1, "");
			strcpy(dst2, "");
		}
		printf("argv[1]: %s\nstrcpy: %s | ft_strcpy: %s\n", argv[1], dst2, dst1);
	}
	else
		printf("Too many args.");
}
