#include <stdio.h>
int main()
{
	int a, product;
	printf("Enter 1st value :: ");
	scanf("%d", &a);
	int b;
	printf("Enter 2nd value :: ");
	scanf("%d", &b);

	if(a>b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}

	for(int j = a; j <= b; j++)
	{
		product = 1;
		for(int i = 1; i <= j; i++)
		{
			product = product * i;
		}
		printf("factorial of %d is :: %d",j, product);
		putchar(10);
	}


	return 0;

}
