#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	int coefficient = 1;
	for(int j = 1; j <= row-i; j++)
	{
		printf(" ");
	}
	for(int k = 1; k <= i; k++)
	{
		printf("%d ", coefficient);
		coefficient = coefficient*(i-k)/k;
	}
	putchar(10);
}
return 0;
}
