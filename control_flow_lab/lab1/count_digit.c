#include <stdio.h>
int main()
{
	int num;
	int count = 0;
	printf("ENter num :: ");
	scanf("%d",&num);

	if(num==0)
	{
		printf("1 Digit");
	}
	else
	{
		while(num!=0)
		{
			num = num/10;
			count++;
		}
	}
	printf("%d",count);
	putchar(10);
	return 0;

}
