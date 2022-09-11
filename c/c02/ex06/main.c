#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
	int x;
	char a[] = "hi ii";
	x = ft_str_is_printable(a);
	printf("%d ", x);
}
