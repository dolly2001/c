#include <stdio.h>

void f(int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		printf("HellO");
	}
}
int main()
{

	f(5);
	putchar(10);
	return 0;
}
