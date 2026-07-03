#include <stdio.h>

int digits(int i)
{
	if(i<9)
		return 1;
	return 1 + digits(i/10);
}

int main()
{
	int n, res;
	printf("Enter value :: ");
	scanf("%d", &n);

	res = digits(n);
	printf("%d", res);
	return 0;
}

