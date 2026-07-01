#include <stdio.h>
int main()
{

	int num, a, b, count = 0, last, prod = 1, sum = 0, i;
	printf("Enter num :: ");
	scanf("%d",&num);
	a = num;
	b = num;

	while(a!=0)
	{
		a=a/10;
		count++;
	}

	while(b!=0)
	{
		last = b%10;
		b = b/10;
		for(i = 1; i <= count; i++)
			prod = prod * last;
		sum = sum + prod;
		prod=1;
	}

	if(sum==num)
	{
		printf("%d is a ARMSTRONG NUMBER!",num);
	}
	else
	{
		printf("%d is not a ARMSTRONG NUMBER!", num);
	}

putchar(10);
return 0;
}
