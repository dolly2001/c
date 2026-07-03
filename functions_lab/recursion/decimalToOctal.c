#include <stdio.h>

void DtoO(int i)
{
	if(i==0 || i==1)
	{
		printf("%d",i);
		return;
	}
	DtoO(i/8);
	printf("%d",i%8);
}

void main()
{
	int i;
	printf("Enter value :: ");
	scanf("%d", &i);

	DtoO(i);
}
