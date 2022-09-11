#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char s[] = "hiiiiiiiiii";
	char d[] = "hel lo";

	ft_strcpy(d, s);
	printf("%s \n", d);
}
