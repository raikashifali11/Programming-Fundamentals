 //Write a C program to calculate the sum of all digits of a number.

 #include<stdio.h>
 int main(){
    int number,remainder;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    while (number>0)
    {
        remainder = number%10;
        sum = sum + remainder;
        number = number/10;
    }
    printf("Sum is %d",sum);
    return 0;
 }