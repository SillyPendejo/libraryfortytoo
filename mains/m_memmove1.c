#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main () 
{
	//char dest[] = "oldstring";
	//char dest1[] = "oldstring";
	char dest[60]  = "newstringAAAAAAA";
	char dest1[60]  = "newstringAAAAAAA";
	char *src = dest + 3;
	char *src1 = dest1 + 3;
	printf("Before memmove    dest = %s, src = %s\nBefore ft_memmove dest = %s, src = %s\n", dest, src, dest1, src1);
	memmove(dest, src, 9);
	ft_memmove(dest1, src1, 9);
	printf("After memmove   : dest = %s src = %s\nAfter ft_memmove: dest = %s src = %s\n", dest, src, dest1, src1);
}
