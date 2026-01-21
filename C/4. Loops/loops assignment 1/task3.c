// Write a program that finds the sum of all the numbers upto n divisible by 3 or 
// 5 but not by both:
// Sample run:
// Enter a value for n: 20
// The sum of numbers up to 20 divisible by 3 or 5 but not both is: 83
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if ((i%3==0 || i%5==0 ) && !(i%3==0 && i%5==0))
            sum = sum+i;     
    }
    printf("The sum of numbers up to %d divisible by 3 or 5 but not both is: %d",n,sum);
    return 0;
}