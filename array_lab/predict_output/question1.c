#include <stdio.h>
int main()
{
	char c[] = "ABCD2011";
	char *p = c;

	printf("%s", p + p[3] - p[1]);
	putchar(10);

	return 0;
}
