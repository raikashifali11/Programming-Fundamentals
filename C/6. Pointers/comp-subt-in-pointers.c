// We can perform subtraction and comparizon operations with pointers
#include<stdio.h>

int main(){
    int age = 18;
    int _age = 20;
    int* ptr = &age;
    int* _ptr = &_age;

    printf("difference = %u\n",ptr - _ptr);
    // _ptr = &age;
    printf("comparison = %u\n",ptr == _ptr);


    return 0;
}

    
    