#include <stdio.h>
int main()
{
	int num;
	printf("Enter num :: ");
	scanf("%d", &num);
	int i;
	for(i = 2; i < num; i++)
	{
		if(num%i == 0)
		{
			printf("NOT A PRIME NUMBER");
			putchar(10);
			break;
		}
	}

	if(i==num)
	{
		printf("PRIME NUMBER");
		putchar(10);
	}
return 0;
}

