#include <stdio.h>
void main()
{
	int Input;
	printf("Input :: ");
	scanf("%d", &Input);

	int count = 0;
	if(Input >= 0 && Input <= 9)
	{
		printf("1 Digit");
	}
	else
	{
		while(Input != 0)
		{
			Input = Input / 10;
			count++;
		}
		printf("%d Digits", count);
	}
}
