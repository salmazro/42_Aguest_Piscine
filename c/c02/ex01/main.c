#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *x;
	int dest_size = 20;
	char a[] = "hello Shama";
	char b[dest_size];

	x = ft_strncpy(b, a, 3);
	printf("%s \n", x);
}
