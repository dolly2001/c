#include <stdio.h>
// function -> A function is a peice of code which can be used multiple time, only have to write once.
int sum(int a, int b){
 int result = a + b;
 return result;
}
int main(){

// Function call
int add = sum(5, 5);
printf("%d", add);

return 0;
}
