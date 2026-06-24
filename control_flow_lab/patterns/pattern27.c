#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);
int count = 1;
int rcount = row * (row + 1);

for(int i = 1; i<= row; i++)
{

	for(int j = 1; j <= i-1; j++)
	{
		printf("  ");
	}
	for(int k = 1; k <= (row-i)+1; k++)
	{
		printf("%d ", count);
		count++;
	}
	for(int l = 1; l <= (row-i)+1; l++)
	{
		printf("%d ", rcount);
		rcount--;
	}

	putchar(10);
}

return 0;
}
