//Write a C program to print all ASCII characters with their ASCII values.

#include<stdio.h>

int main(){
    printf("Ascii characters with their ascii values are:\n");
    for (int i = 0; i < 256; i++)
    {
        printf("Character: %c Ascii value: %d\n",i,i);
    }  
    return 0;
}