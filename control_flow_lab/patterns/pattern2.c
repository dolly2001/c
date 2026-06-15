#include <stdio.h>
int main()
{
int rows, col;
printf("Enter rows : ");
scanf("%d", &rows);

printf("Enter colums : ");
scanf("%d", &col);

for(int i = 0; i < rows; i++){
	for(int j = 0; j < col; j++)
	{

		printf(" * ");
	}
	putchar(10);
}
return 0;
}
