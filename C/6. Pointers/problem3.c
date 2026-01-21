//Call by Value problem
#include<stdio.h>

void printAddress(int n);

int main(){
    int n = 4;
    printAddress(n);                             //print address of copied number
    printf("original n address is %p\n",&n);     //print address of original number
    
    return 0;
}

//copy of a number is passed here so copy has different address than original number
void printAddress(int n){   
    printf("copy of n address is %p\n",&n);
}

