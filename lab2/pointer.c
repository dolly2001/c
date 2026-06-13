#include <stdio.h>
int main()
{
int age = 22;
int *addressOfAge = &age;

printf("your age is %d", age);
putchar(10);
printf("Memory Address of your age is %p", addressOfAge);

return 0;

}

