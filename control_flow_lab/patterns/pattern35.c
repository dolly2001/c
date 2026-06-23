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
		printf("%d", j);
	}
	for(int k = 1; k <= 2*(row-i); k++)
	{
		printf(" ");
	}
	for(int l = i; l >= 1; l--)
	{
		printf("%d", l);
	}
	putchar(10);
}

return 0;
}

