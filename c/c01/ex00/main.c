#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int a = 5;
	int *ptr;

	ptr = &a;
	printf("Before %d", a);
	ft_ft(&a);
	printf("\nAfter %d", *ptr);
	return(0);
}
