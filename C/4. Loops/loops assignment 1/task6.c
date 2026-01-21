// Write a program that finds the sum of squares of numbers from 1 to n.
// Sample run:
// Enter a number: 3
// The sum of squares from 1 to 3 is 14
#include<stdio.h>
#include<math.h>

int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        sum = sum + pow(i,2);   
    printf("The sum of squares from 1 to %d is %d",n,sum); 
    return 0;
}