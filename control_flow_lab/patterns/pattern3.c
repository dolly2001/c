#include <stdio.h>
int main()
{
int rows, col;
printf("Enter rows : ");
scanf("%d", &rows);

printf("Enter col : ");
scanf("%d", &col);

for(int i = 1; i <= rows; i++)
{
	for(int j = 1; j <= i; j++)
 	{
		printf(" * ");
	}
	putchar(10);
}

return 0;
}
