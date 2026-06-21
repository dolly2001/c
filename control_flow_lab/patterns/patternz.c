#include <stdio.h>
int main()
{
int num;
printf("Enter value :: ");
scanf("%d", &num);

for(int i = 1; i <= num; i++)
{
	printf("%d", num);
}

return 0;
}
