#include<stdio.h>

void square(int n);
void _square(int* n);

int main(){
    int number = 4;
    
    square(number);
    printf("number = %d\n",number); // value of number does not changes because we call function by value

    _square(&number);
    printf("number = %d\n",number); // value of number changes after _square function because we call it by reference 

    
    return 0;
}
// call by value 
// copy of value is passed in this function 
void square(int n){
    n = n*n;
    printf("square = %d\n",n);

}

// call by reference/address
// value is passed through address
void _square(int* n){
    *n = (*n) * (*n);
    printf("square = %d\n",*n);

}