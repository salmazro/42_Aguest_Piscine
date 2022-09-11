#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char *x;
	char a[] = "hello hi hello";
	char b[] = "hi";

	x = ft_strstr(a,b);
	printf("%s ", x);
}
