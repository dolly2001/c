
#include <stdio.h>
int main()
{
int rows, col;
printf("Enter Rows :: ");
scanf("%d",&rows);

printf("Enter columns :: ");
scanf("%d", &col);

for(int i = 1; i <= rows; i++)
{
	for(int j = col-i; j >= 0; j--)
	{
		printf(" * ");
	}
	putchar(10);
}
return 0;
}
