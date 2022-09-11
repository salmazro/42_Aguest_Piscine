#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	int x;
	char a[] = "Hello o";
	char b[] = "world abc";

	x = ft_strlcat(a,b,8);
	printf("%d ", x);
}
