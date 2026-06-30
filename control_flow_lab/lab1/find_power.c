#include <stdio.h>
int main()
{
	int base, power;
	printf("Enter base and power :: ");
	scanf("%d%d",&base,&power);
	int result = 1;

	for(int i = 1; i <= power; i++)
	{
		result = result * base;
	}

	printf("%d", result);
	putchar(10);

return 0;
}
