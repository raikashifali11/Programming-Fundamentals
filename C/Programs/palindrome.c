#include<stdio.h>

int main(){
    int number;
    int reversednum = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    int original = number;

    while (number>0)
    {
    int remainder = number%10;
    reversednum = reversednum*10 + remainder;
    number = number/10;
    }
    if (original == reversednum)
    {
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome\n");
    }  
    return 0;
}