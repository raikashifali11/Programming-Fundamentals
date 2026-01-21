#include<stdio.h>

int main(){
    char* canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";               // because of string pointer it can be modified
    puts(canChange);

    char cannotChange[] = "Rai Kashif Ali";
    puts(cannotChange);
    // cannotChange = "Rai";           // this will give error because character array cannot be modified
    // puts(cannotChange);
    return 0;
}