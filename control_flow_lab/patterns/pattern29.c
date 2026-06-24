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
		printf("*");
	}
	for(int k = 1; k <= 2*(row-i); k++)
	{
		printf(" ");
	}
	for(int l = 1; l<= i; l++)
	{
		printf("*");
	}
	putchar(10);
}
for(int i = 1; i <= row-1; i++)
{
	for(int j = 1; j <= row-i; j++)
	{
		printf("*");
	}
	for(int k = 1; k <= 2*i; k++)
	{
		printf(" ");
	}
	for(int l = 1; l <= row-i; l++)
	{
		printf("*");
	}
	putchar(10);
}
return 0;
}
