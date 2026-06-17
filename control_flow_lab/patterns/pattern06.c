#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

for(int a = 1; a <= row; a++)
{
	for(int b = 1; b <= row-a; b++)
	{
		printf("   ");
	}
	for(int c = 1; c <= a; c++)
	{
		printf(" * ");
	}
	putchar(10);
}

return 0;

}
