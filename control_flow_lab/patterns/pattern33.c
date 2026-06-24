#include <stdio.h>
int main()
{
int row;
printf("Enter row :: ");
scanf("%d", &row);

char alpha = 'A';

for(int i = 1; i <= row; i++)
{
	for(int j = 1; j <= i; j++)
	{
		if((i+j)%2==0)
		{
			printf("%c ", alpha+32);
		}
		else
		{
			printf("%c ", alpha);
		}
		alpha++;
	}
	putchar(10);
}

return 0;
}

