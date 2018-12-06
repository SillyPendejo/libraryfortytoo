#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"
void ft_memdel(void **s);
int main()
{
    void *m = malloc(42);
    
    ft_memdel(&m);
    if (m == ((void *)0))
        exit(EXIT_SUCCESS);
    exit(EXIT_FAILURE);
}
