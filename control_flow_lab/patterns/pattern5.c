#include <stdio.h>
int main()
{
int rows, col;
printf("Enter rows :: ");
scanf("%d", &rows);

printf("Enter col :: ");
scanf("%d", &col);

for(int i = 1; i <= rows; i++)
{
	//space
	for(int j = col-i;  j >= 1; j--)
	{
		printf("   ");
	}
	for(int k = 1; k <= i; k++)
	{
		printf(" * ");
	}
	putchar(10);
}
return 0;
}
