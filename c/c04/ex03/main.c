#include <stdio.h>

int ft_atoi(char *str);

int main()
{
	int x;
	char a[] = " ---+--+1234ab567";

	x = ft_atoi(a);
	printf("%d ", x);
}
