#include <stdio.h>

int factorial(int i)
{

	if(i == 1 || i == 0)
	{
		if(i == 1)
			return 1;
		else
			return i;
	}
	else
	{
		return i * factorial(i-1);
	}
}

int main()
{
	int value;
	printf("Enter value :: ");
	scanf("%d", &value);

	int result = factorial(value);
	printf("%d", result);
	putchar(10);

	return 0;
}
