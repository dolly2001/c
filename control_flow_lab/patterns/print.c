#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= row; j++)
	{
		printf("*");
		for(int k = 1; k <= row-i+1; k++)
		{
			printf(" ");
		}
	}
	putchar(10);
}

return 0;

}
