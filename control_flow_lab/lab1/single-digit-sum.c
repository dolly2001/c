#include <stdio.h>
int main()
{

	int digit_sum = 0;
	int value;
	printf("Enter any positive Integer :: ");
	scanf("%d", &value);

	while(value > 9)
	{
		digit_sum = 0;
		while(value!=0)
		{
			digit_sum = digit_sum + (value%10);
			value = value/10;
		}
		value = digit_sum;
	}
	if(value < 0)
	{
		printf("Warning : Please enter a positive integer");
	}
	else if(value >= 0 && value <= 9)
	{
		printf("%d",value);
	}
	else
	{
		printf("%d",digit_sum);
	}
	putchar(10);

return 0;
}
