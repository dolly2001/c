#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= i; j++)
	{
		if((i+j) % 2 == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
	putchar(10);
}
return 0;
}
