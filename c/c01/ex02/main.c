#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int a1;
	int b1;

	a1 = 5;
	b1 = 6;
	printf("Before = %d -- %d", a1, b1); 
	ft_swap(&a1, &b1);
	printf("After = %d -- %d", a1, b1);
	return(0);
}
