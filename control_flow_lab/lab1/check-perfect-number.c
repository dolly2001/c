#include <stdio.h>
int main()
{
	int Inp, factors = 0;
	printf("Input :: ");
	scanf("%d", &Inp);
	int i;
	for(i = 1; i < Inp; i++)
	{
		if(Inp%i==0)
			factors = factors+i;
	}

	if(factors == Inp)
	{
		printf("Perfect Number");
		putchar(10);
	}
	else
	{
		printf("Not a Perfect Number");
		putchar(10);
	}

	return 0;
}
