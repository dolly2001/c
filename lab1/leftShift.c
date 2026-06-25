#include <stdio.h>
int main()
{
	int a, b, c;

	printf("Enter num :: ");
	scanf("%d", &a);

	printf("How many times your want to left shift :: ");
	scanf("%d", &b);

	c = a<<b;

	printf("%d",c);
	putchar(10);

	return 0;
}
