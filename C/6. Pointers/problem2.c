// Print value of i using pointer to pointer variable
#include<stdio.h>

int main(){
    int i = 10;
    int* ptr = &i;
    int** pptr = &ptr;

    // three methods to access value of variable i

    printf("%d\n",i);          // by calling directly
    
    printf("%d\n",*ptr);       // by using pointer variable

    // Answer of this problem 
    printf("%d\n",**pptr);     // by using pointer to pointer variable


    return 0;
}