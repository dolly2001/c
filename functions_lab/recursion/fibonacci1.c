#include <stdio.h>

int fibo(int term)
{
	if(term == 1 || term == 0)
		return term;
	else
		return fibo(term-1) + fibo(term-2);
}

int main()
{
	int last_term;
	printf("Enter the last term :: ");
	scanf("%d", &last_term);

	int res = fibo(last_term);
	printf("%d", res);

	return 0;
}
