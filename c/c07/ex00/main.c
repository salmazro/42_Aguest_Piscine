#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main()
{
	char src[] = "Hello World";
	char *s2;
	char *s3;

	s3 = strdup(src);
	printf("%s \n", s3);

	s2 = ft_strdup(src);
	printf("%s \n", s2);
}
