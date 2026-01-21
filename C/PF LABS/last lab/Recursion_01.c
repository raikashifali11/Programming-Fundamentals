#include<stdio.h>

int sum = 0;
int sumOfdigits(int n);

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Sum of digits is %d",sumOfdigits(number));
    return 0;
}
int sumOfdigits(int n){
    if (n == 0)
        return 0;
    
    int remainder = n%10;
    n = n/10;
    sum = sum + remainder;
    sumOfdigits(n);
    return sum;
}