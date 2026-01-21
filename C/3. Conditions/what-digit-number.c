#include<stdio.h>

int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if (n >= 0 && n <= 9)
    {
        printf("Number is 1 digit");
    }
    else if (n >= 10 && n <= 99)
    {
        printf("Number is 2 digit");
    }
    else if (n >= 100 && n <= 999)
    {
        printf("Number is 3 digit");
    }
    else if (n >= 1000 && n <= 9999)
    {
        printf("Number is 4 digit");
    }
    else if (n >= 10000 && n <= 99999)
    {
        printf("Number is 5 digit");
    }
    else if (n >= 100000 && n <= 999999)
    {
        printf("Number is 6 digit");
    }
    else if (n >= 1000000 && n <= 9999999)
    {
        printf("Number is 7 digit");
    }
    else if (n >= 10000000 && n <= 99999999)
    {
        printf("Number is 8 digit");
    }
    else if (n >= 100000000 && n <= 999999999)
    {
        printf("Number is 9 digit");
    }
    else if (n >= 1000000000 && n <= 9999999999)
    {
        printf("Number is 10 digit");
    }
    else
    {
        printf("Number is greater than 10 digit");
    }
    
    
    return 0;
}