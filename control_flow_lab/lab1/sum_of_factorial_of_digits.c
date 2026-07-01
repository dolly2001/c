#include <stdio.h>
int main()
{

	int num, prod = 1, sum = 0, last;
	printf("Enter num :: ");
	scanf("%d", &num);
	int a = num;

	while(num!=0)
	{
		last = num%10;
		num = num/10;
		for(int i = 1; i <= last; i++)
			prod = prod * i;
		sum = sum + prod;
		prod = 1;
	}
	if(sum==a)
		printf("%d is strong number",a);
	else
		printf("%d not a strong number",a);

	putchar(10);

	return 0;

}
