//Write a C program to find the first and last digit of a number.

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int lastDigit = number%10;
    int firstDigit;
    while (number>9)
    {
        firstDigit = number/10;
        number = number/10;
    } 
    printf("First digit of a number is %d\n",firstDigit);
    printf("Last digit of a number is %d\n",lastDigit);
    return 0;
}