#include <stdio.h>
int main()
{

int row;
printf("Enter rows :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{

	for(int j = 1; j <= i-1; j++)
	{
		printf("   ");
	}
	for(int j = i; j <= row; j++)
	{
		printf(" * ");
	}
	for(int k = 1; k <= row-i; k++)
	{
		printf(" * ");
	}
putchar(10);
}



return 0;
}
