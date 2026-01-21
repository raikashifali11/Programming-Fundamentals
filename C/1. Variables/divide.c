#include<stdio.h>

int main(){
    int a;
    printf("Enter first value: ");
    scanf("%d",&a);
    int b;
    printf("Enter second value: ");
    scanf("%d",&b);
    printf("Quotient is %d\n", a/b);
    printf("Remainder is %d\n",a%b);
    return 0;
}