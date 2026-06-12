// Password Cheaker!
#include <stdio.h>
#include <string.h>
int main()
{
char password[50] = "Piyush";
char input[50];
printf("Enter password : ");
scanf("%s", input);

if(strcmp(password, input) == 0){
    printf("Correct Password!!");
}
else{
    printf("Incorrect Password!!!");
}
return 0;
}

/*
Note -> if you compare like this if(password == input), you're comparing 
address of password == address of input insted of this one should use 
string comparision function. 
strcmp(password, input) = 0
*/