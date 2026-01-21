#include <stdio.h>
#include <math.h>


int main(){
    int prime = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (int i = 2; i < n/2; i++)    // to check number can be divisible either than 1 or itself
    {
        if ( n%i == 0 )
        {
            prime = 0;             // if divisble then it is not a prime number
            break;
        }    
    }


    if ( (prime == 1) && (n > 1) )
    {
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
    
    
    return 0;
}