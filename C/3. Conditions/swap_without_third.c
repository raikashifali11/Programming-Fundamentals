#include<stdio.h>

int main(){
    int a, b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap:\n");
    printf("Value of number 1 is %d \n",a);
    printf("Value of number 2 is %d \n",b);

    return 0;
}