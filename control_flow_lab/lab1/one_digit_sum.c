#include <stdio.h>
int main()
{

	int num, sum = 0;
	printf("Enter num :: ");
	scanf("%d",&num);

	if(num >= 0 && num <= 9)
	{
		printf("%d",num);
	}
	else
	{
		while(num!=0)
		{
			sum = num%10;
			num = num/10;
		}
	printf("%d",sum);
	}
	putchar(10);
return 0;
}
