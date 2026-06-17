#include <stdio.h>
int main()
{
int row;
printf("Enter rows :: ");
scanf("%d", &row);

for(int i = 1; i <=  row; i++)
{
	for(int j = 1; j <= i; j++)
	{
		printf("*");
	}
	for(int k = 1; k <= row-i; k++)
	{
		printf(" ");
	}
	for(int l = 1; l <= row-i; l++)
	{
		printf(" ");
	}
	for(int m = 1; m <= i; m++)
	{
		printf("*");
	}
	putchar(10);
}
for(int a = 1; a <= row-1; a++)
{

	for(int b = 1; b <= row-a; b++)
	{
		printf("*");
	}
	for(int c = 1; c <= a; c++)
	{
		printf(" ");
	}
	for(int d = 1; d <= a; d++)
	{
		printf(" ");
	}
	for(int e = 1; e <= row-a; e++)
	{
		printf("*");
	}
	putchar(10);
}
return 0;
}
