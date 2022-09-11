#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	int x;
	char s1[] = "Shama";
	char s2[] = "Sara";

	x = ft_strcmp(s1, s2);
	printf("%d ", x);
}
