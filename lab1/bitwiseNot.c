#include <stdio.h>
int main()
{
	int a;
	printf("Enter value :: ");
	scanf("%d", &a);

	printf("%d", ~(a));
	putchar(10);

	/*
		~a = -(a+1)
	*/

	return 0;

}
