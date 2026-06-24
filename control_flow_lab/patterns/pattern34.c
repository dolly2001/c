#include <stdio.h>
int main()
{
	int row;
	printf("Enter row :: ");
	scanf("%d", &row);

	for(int i = 1; i <= row; i++)
	{
		for(char ch = 'A' + (row-i); ch >= 'A'; ch--)
		{
			printf("%c ", ch);
		}
		putchar(10);
	}

return 0;
}
