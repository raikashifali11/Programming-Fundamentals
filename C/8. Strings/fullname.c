#include<stdio.h>

int main(){
    char fullName[100];
    //input
    printf("Enter your full name: ");
    gets(fullName);               // in gets user can enter string of any length. there is no limit.
    // fgets(fullName,15,stdin);  // fgets limits the string length enter by user. Here is 14 (n-1 = 15-1)
 
    //output
    printf("Your full name is: ");
    puts(fullName);               // puts print string of any size
    return 0;
}