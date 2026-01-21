//Write a C program to print the Fibonacci series up to the nth term using a do-while loop.

#include<stdio.h>

int main(){
    int n,i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    int firstDigit = 0;
    int secDigit = 1;
    printf("%d\t%d",firstDigit,secDigit);
    int third;
    do
    {
        third = firstDigit + secDigit;
        printf("\t%d",third);
        firstDigit = secDigit;
        secDigit = third;
        i++;
    } while (i<n);
    
    return 0;
}