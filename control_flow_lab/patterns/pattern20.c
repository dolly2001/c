#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

int col;
printf("Enter col :: ");
scanf("%d", &col);

for(int i = 1; i <= row; i++)
{

	for(int j = 1; j <= col; j++)
	{
		if(i==1||i==row||j==1||j==col)
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
