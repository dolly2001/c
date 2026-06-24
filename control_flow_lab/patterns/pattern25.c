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
		printf(" ");
	}
	for(int k = 1; k <= row; k++)
	{
		if(i==1||i==row||k==1||k==row)
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

