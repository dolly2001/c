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
		if(j==1||j==i)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	for(int k = 1; k <= 2*(row-i); k++)
	{
		printf(" ");
	}
	for(int l = 1; l <= i; l++)
	{
		if(l==1||l==i)
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
for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= (row-i)+1; j++)
	{
		if(j==1||j==(row-i)+1)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	for(int k = 1; k <= 2*(i-1); k++)
	{
		printf(" ");
	}
	for(int k = 1; k <= (row-i)+1; k++)
	{
		if(k == 1|| k==(row-i)+1)
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
