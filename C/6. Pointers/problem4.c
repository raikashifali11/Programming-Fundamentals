// Call by reference problem
#include<stdio.h>

void printAddress(int* n);

int main(){
    int n = 4;
    printAddress(&n);                             
    printf("address of n is %p\n",&n);    
    
    return 0;
}
//We access number by address so address remains same
void printAddress(int* n){   
    printf("address of n is %p\n",n);
}