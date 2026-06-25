#include <stdio.h>
int main()
{
	int a, b, c;

	printf("Enter value :: ");
	scanf("%d", &a);

	printf("Enter how many times you want to right shift the value :: ");
	scanf("%d", &b);

	c = a>>b;

	printf("%d",c);
	putchar(10);

	return 0;

}
