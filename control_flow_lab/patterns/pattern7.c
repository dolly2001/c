#include <stdio.h>
int main()
{
int rows, col;

printf("Enter rows :: ");
scanf("%d", &rows);

printf("Enter columns :: ");
scanf("%d", &col);

for(int i = 1; i <= rows; i++)
{
	for(int i_j = rows-i; i_j >= 1; i_j--)
	{
		printf("   ");
	}
	for(int j = 1; j <= i; j++)
	{
		printf(" * ");
	}
	for(int k = 1; k <= i-1; k++)
	{
		printf(" * ");
	}
putchar(10);
}
return 0;
}

