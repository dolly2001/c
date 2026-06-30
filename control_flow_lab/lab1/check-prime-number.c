#include <stdio.h>
int main()
{
	int Input;
	printf("Enter Input :: ");
	scanf("%d",&Input);

	for(int i = 2; i < Input; i++)
	{
		if(Input%i == 0)
		{
			printf("Not a PRIME NUMBE ");
			putchar(10);
			break;
		}
		else
		{
			printf("A PRIME NUMBER");
			putchar(10);
			break;
		}
	}
	return 0;
}
