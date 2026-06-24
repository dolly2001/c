#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int k = 1; k <= row-i; k++)
	{
		printf(" ");
	}
	for(int j = 1; j <= (2*i)-1; j++)
	{
		if(j==1||j==(2*i)-1)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	for(int l = 1; l <= (row-i)*2; l++)
	{
		printf(" ");
	}
	for(int m = 1; m <= (2*i)-1; m++)
	{
		if(m==1||m==(2*i)-1)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	putchar(10);
}

return 0;
}
