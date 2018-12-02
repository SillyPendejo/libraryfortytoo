#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main () 
{
	//char dest[] = "oldstring";
	//char dest1[] = "oldstring";
	char src[60]  = "newstring";
	char src1[60]  = "newstring";
	char *dest = src + 3;
	char *dest1 = src1 + 3;
	printf("Before memmove    dest = %s, src = %s\nBefore ft_memmove dest = %s, src = %s\n", dest, src, dest1, src1);
	memmove(dest, src, 9);
	ft_memmove(dest1, src1, 9);
	printf("After memmove   : dest = %s src = %s\nAfter ft_memmove: dest = %s src = %s\n", dest, src, dest1, src1);
}
