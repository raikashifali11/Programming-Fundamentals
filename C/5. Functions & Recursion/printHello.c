#include<stdio.h>

void printHello();      //function declaration/prototype

int main(){

    printHello();  //function call
    printHello();  //function call
    printHello();  //function call
    printHello();  //function call
    
    
    return 0;
}

void printHello(){      //function definition
    printf("Hello!\n");
}