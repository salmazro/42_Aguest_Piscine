#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	int x;
	char a[] = "123";
	x = ft_str_is_numeric(a);
	printf("%d ", x);
}
