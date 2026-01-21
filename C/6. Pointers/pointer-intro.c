#include<stdio.h>

int main(){
    int age = 22;

    // int* ptr means it is pointer variable
    int* ptr = &age;      // pointer variable stores memory address (&) of another variable
    int yjyy = *ptr;      // *ptr means value at stored address of variable

    // int** pptr means it is pointer to pointer variable
    int** pptr = &ptr;    // Stores address of another pointer variable 

    printf("%d\n",age);   // value of variable
    printf("%p\n",ptr);   // %p format specifier to print address of variable
    printf("%d\n",*ptr);  // value at stored address
    printf("%p\n",pptr);  // %p format specifier to print address of variable 

    return 0;
}