#include <stdio.h>
int main()
{
int rows, col;

printf("Enter row :: ");
scanf("%d", &rows);

printf("Enter col :: ");
scanf("%d", &col);

for(int i = 0; i < rows; i++)
{
	for(int j = 1; j <= i; j++)
	{
		printf("   ");
	}
	for(int k = col; k > i; k--)
	{
		printf(" * ");
	}
	putchar(10);
}
return 0;
}
