#include<stdio.h>

int main(){
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s",&name);
    // it will print only single word because scanf stops taking input when space is entered
    printf("Your name is %s",name); 
    return 0;
}