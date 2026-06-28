#include <stdio.h>
int main()
{
	int num;
	printf("Enter number :: ");
	scanf("%d", &num);
	int result = 0;

	for(int i = 1; i < num; i++)
	{
		if(num%i==0)
			result = result + i;
	}
	if(result == num)
		printf("Perfect Number");
	else
		printf("Note a perfect number");

return 0;
}
