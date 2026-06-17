#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= row-i; j++)
	{
		printf("   ");
	}
	for(int k = 1; k <= i; k++)
	{
		printf(" * ");
	}
	putchar(10);
}

for(int a = 1; a <= row; a++)
{
	for(int b = 1; b <= a; b++)
	{
		printf("   ");
	}
	for(int c = 1; c <= row-a; c++)
	{
		printf(" * ");
	}
	putchar(10);
}
return 0;
}
