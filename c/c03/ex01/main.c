#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int x;
	char s1[] = "hello";
	char s2[] = "heooo";

	x = ft_strncmp(s1, s2, 3);
	printf("%d ", x);

}
