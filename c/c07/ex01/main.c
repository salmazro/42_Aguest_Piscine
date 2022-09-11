#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *x;
	int i;
	i = 0;
	x = ft_range(-5, 10);
	if (x != NULL)
	{
		while (x[i] != 0)
		{
			printf("%d ", x[i]);
			i++;
		}
	}

	/*int i = *ft_range(-5, 10);
	printf("%d\n", i);
	return (0);*/
}
