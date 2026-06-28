#include <stdio.h>
int main()
{
	int num;
	printf("Enter the value :: ");
	scanf("%d", &num);
	int count = 0;

	while(num!=0)
	{
		num = num/10;
		count = count+1;
	}
	printf("%d digits",count);

return 0;
}
