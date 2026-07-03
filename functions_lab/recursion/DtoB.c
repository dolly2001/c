#include <stdio.h>

void DtoB(int n)
{
	if(n == 0 || n == 1)
	{
		printf("%d",n);
		return;
	}
	DtoB(n/2);
	printf("%d",n%2);
}

void main()
{

	int n;
	scanf("%d", &n);

	DtoB(n);
}
