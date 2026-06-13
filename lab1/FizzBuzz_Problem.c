#include <stdio.h>
int main()
{
int input;
printf("Enter Number Please :: ");
scanf("%d",&input);

if(input % 3 == 0 && input % 5 == 0)
{
printf("FizzBuzz");
}
else
{

if(input % 3 == 0)
{
printf("Fizz");
}

else if(input % 5 == 0)
{
printf("Buzz");
}
else{
printf("No Fizz or Buzz or FizzBuzz");
}
}
return 0;
}
