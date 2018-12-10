#include <stdio.h>
#include "libft.h"
int	main()
{
	int	a[10] = {1, -10, 2312, 2, 1, 10, 0};
	/*long long int i = -1;
	long long int b = 2;
	ft_swap(&i, &b);
	printf("%lli %lli", i, b);
	*/
	int i = -1;
	ft_bubble_sort((long long int *)a, 1);
	while (a[++i])
		printf("%d\n", a[i]);
}
