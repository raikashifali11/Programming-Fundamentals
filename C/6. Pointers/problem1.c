//find output by dry run
#include<stdio.h>

int main(){
    int* ptr;
    int x;

    ptr = &x;
    *ptr = 0;  // value at stored address (of x) is 0

    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);

    *ptr += 5; // *ptr = *ptr + 5
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);

    (*ptr)++;  // *ptr = *ptr + 1
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);


    return 0;
}