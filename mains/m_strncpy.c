#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		main(int argc, char **argv)
{
	char dst2[50];
	char dst1[50];

	memset(dst2, 49, 50);
	memset(dst1, 49, 50);
	if (argc == 3)
	{
		printf("Before strncpy: %s\n", dst2);
		ft_strncpy(dst1, argv[1], atoi(argv[2]));
		strncpy(dst2, argv[1], atoi(argv[2]));
		printf("argv[1]: %s\nstrncpy: %s | ft_strncpy: %s\n", argv[1], dst2, dst1);
	}
	else if (argc < 3)
        printf("No args.");
    else
		printf("Too many args.");
}
