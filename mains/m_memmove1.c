#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main () 
{
	//char dest[] = "oldstring";
	//char dest1[] = "oldstring";
	char src1[] = "newstring";
	char *dest1 = src1 + 3;
	printf("Before ft_memmove dest = %s, src = %s\n", dest1, src1);
	ft_memmove(dest1, src1, 9);
	printf("After ft_memmove dest = %s, src = %s\n", dest1, src1);
}
