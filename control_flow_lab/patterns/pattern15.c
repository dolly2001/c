#include <stdio.h>
int main()
{

int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int a = 1; a <= row-i; a++)
	{
		printf(" ");
	}
	for(int b = 1; b <= 1; b++)
	{
		printf("*");
	}
	for(int c = 1; c <= i-1; c++)
	{
		printf(" ");
	}
	for(int d = 1; d <= i-2; d++)
	{
		printf(" ");
	}
	for(int e = 1; e <= i-1; e++)
	{
		if(e==1)
		{
			for(int f = 1; f <= 1; f++)
			{
				printf("*");
			}
		}
	}
	putchar(10);
}
for(int i = 1; i < row; i++)
{
	for(int j = 1; j <= i; j++)
	{
		printf(" ");
	}
	for(int k = 1; k <= 1; k++)
	{
		printf("*");
	}
	for(int l = 1; l <= (row-i)-1; l++)
	{
		printf(" ");
	}
	for(int m = 1; m <= (row-i)-2; m++)
	{
		printf(" ");
	}
	for(int n = 1; n <= i; n++)
	{
		if(n==1 && i != row - 1)
		{
			for(int nested = 0; nested < 1; nested++)
			{
				printf("*");
			}
		}
	}

	putchar(10);
}

return 0;

}
