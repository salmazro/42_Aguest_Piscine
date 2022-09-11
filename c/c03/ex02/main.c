#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char *x;
	char src[] = "Hello";
	char dest[] = "World";

	x = ft_strcat(dest, src);
	printf("%s ", x);
}
