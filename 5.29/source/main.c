#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, i=2, gcd=1 ;
	printf("Enter two integers =>");
	scanf_s("%d %d", &a, &b);
	if (a == 1 || b == 1)
	{
		printf("%d", a*b);
	}
	while(a >= i && b >= i)
	{
		while (a%i == 0 && b%i == 0)
		{
			gcd = gcd * i;
			a = a / i;
			b = b / i;
		}
		i++;	
	}
	printf("Lcm = %d", gcd*a*b);
	system("pause");
}