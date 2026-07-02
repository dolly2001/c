#include <stdio.h>
int sum(int a, int b);
void main()
{

	int a, b;
	printf("Enter a and b :: ");
	scanf("%d%d",&a,&b);

	int result = sum(a, b);
	printf("sum of %d and %d is %d",a,b,result);
	putchar(10);
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}
