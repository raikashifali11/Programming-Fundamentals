// Write a program that prints the Fibonacci series up to n terms.
// Sample run:
// Enter the number of terms in the Fibonacci series: 8
// Fibonacci series up to 8 terms:
// 0 1 1 2 3 5 8 13
#include<stdio.h>

int main(){
    int number;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&number);
    
int a = 0;
int b = 1;
int nextTerm;
printf("Fibonacci series up to %d terms:\n",number);
printf("%d %d ",a,b);
for (int i = 1; i <= number-2; i++)
{
    printf("%d ",nextTerm = a+b);
    a = b;
    b = nextTerm;
}

    return 0;
}