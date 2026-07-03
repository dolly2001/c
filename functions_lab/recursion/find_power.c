#include <stdio.h>

int find_power(int a, int b)
{

	if(b == 0 || b == 1)
	{
		if(b == 0)
			return 1;
		else
			return a;
	}
	else
	{
		return a * find_power(a, b-1);
	}
}

int main()
{
	int value, power, res;

	printf("Enter value :: ");
	scanf("%d", &value);

	printf("Enter power :: ");
	scanf("%d", &power);

	res = find_power(value, power);

	printf("%d",res);

	return 0;
}
