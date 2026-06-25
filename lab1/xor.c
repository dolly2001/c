#include <stdio.h>
int main()
{

	int a, b, c;
	
	printf("Enter a :: ");
	scanf("%d", &a);

	printf("Enter b :: ");
	scanf("%d", &b);

	c = a ^ b;

	printf("%d",c);
	putchar(10);

	return 0;

}
