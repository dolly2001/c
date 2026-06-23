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
	for(int k = 1; k <= (2*(row-i))+1; k++)
	{
		if(k==1 || k == (2*(row-i))+1 || (row-i)+1==row)
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
