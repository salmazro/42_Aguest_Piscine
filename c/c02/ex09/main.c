#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char a[] = "salut, 		comment t12u vas ? 42mots qu@arante-d∞eux; cinquante+et+un";
	ft_strcapitalize(a);
	printf("%s ", a);
}
