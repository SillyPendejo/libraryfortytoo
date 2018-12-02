#include <stdlib.h>
void *ft_memmove(void *sq, const void *s, size_t i);
int main()
{	
	int size = 128 * 1024 * 1024;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);

	__builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
	if (!dst)
		exit(EXIT_FAILURE);
	ft_memmove(dst, data, size);
	exit(EXIT_SUCCESS);
}
