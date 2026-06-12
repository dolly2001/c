// control flow statements :
// 1. If-else
// Example :

#include <stdio.h>
int main()
{
int age;
printf("Enter your age :: ");
scanf("%d", &age);

if(age >= 1 && age <= 17){
printf("You are not eligible for voting!!");
}
else{
printf("You are eligible for voting");
}
return 0;
}
