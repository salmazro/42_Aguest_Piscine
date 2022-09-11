#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
