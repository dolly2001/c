#include <stdio.h>
int main()
{
// Array -> An Array is a  data type, which stores same kind of data one after another.
int array_of_Table_two[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

for(int i = 0; i <= 10; i++)
{
printf("2X%d = %d", i, array_of_Table_two[i]);
putchar(10);
}
return 0;
}
