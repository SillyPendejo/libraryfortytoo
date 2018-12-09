#include "../libft.h"
#include <stdio.h>
int main()
{
	char *data = "hello, i'm a data";
	t_list *l = ft_lstnew(data, strlen(data) + 1);
	if (l->next != 0)
		printf("l->next is not 0");
	printf("%s", l->content);
}
