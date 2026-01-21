// Write a Program to find the factorial of a given number (n):
// Sample run:
// Enter a number: 5
// Factorial of 5 is 120.
#include<stdio.h>

int main(){
    int factorial = 0, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        factorial = factorial + n*(n-1);
    }
    printf("Factorial of %d is %d",n,factorial);
    
    return 0;
}