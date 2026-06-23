#include <stdio.h>
int main()
{
int row;
printf("Enter row(>=1) :: ");
scanf("%d", &row);
int count = 1;
for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= i; j++)
	{
		printf("%d ", count);
		count = count+1;
	}
	putchar(10);
}

return 0;
}
