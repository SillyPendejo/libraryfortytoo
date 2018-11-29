#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len);
int main () 
{
	//char dest[] = "oldstring";
	//char dest1[] = "oldstring";
	char src[]  = "newstring";
	char *dest = src + 3;
	printf("Before memmove    dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove    dest = %s, src = %s\n", dest, src);
}
