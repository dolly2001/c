#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= row-i+1; j++)
	{
		printf(" %d ", i);
	}
	putchar(10);
}
return 0;
}
