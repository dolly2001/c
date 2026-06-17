#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= i-1; j++)
	{
		printf(" ");
	}
	for(int k = 1; k <= row-i+1; k++)
	{
		printf("* ");
	}
	putchar(10);
}
for(int a = 1; a <= row; a++)
{
	for(int b = 1; b <= row-a; b++)
	{
		printf(" ");
	}
	for(int c = 1; c <= a; c++)
	{
		printf("* ");
	}
	putchar(10);
}
return 0;
}
