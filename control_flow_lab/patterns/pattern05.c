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
		printf(" * ");
	}
putchar(10);
}
for(int a = 1; a <= row; a++)
{
	for(int b = 1; b <= row-a; b++)
	{
		printf(" * ");
	}
putchar(10);
}

return 0;
}
