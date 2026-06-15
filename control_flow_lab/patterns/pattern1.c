#include <stdio.h>
int main()
{

int rows;
printf("Enter how many rows you want to print :: ");
scanf("%d",&rows);

for(int i = 0; i < rows; i++)
{
printf("*");
putchar(10);
}

return 0;
}
