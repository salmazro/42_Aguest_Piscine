#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char *x;
	char src[] = "Hello";
	char dest[] = "World";

	x = ft_strncat(dest, src, 4);
	printf("%s ", x);
}
