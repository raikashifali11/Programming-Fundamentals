#include<stdio.h>

int main(){
    int a,b;
     int gcd = 0;
     int temp;
     int remainder;
     printf("Enter first number a : ");
     scanf("%d",&a);
     printf("Enter second number b : ");
     scanf("%d",&b);
// if (a>b)
// {
//     temp = a;
//     a = b;
//     b = temp; 
// }
if (b%a == 0)
{
    gcd = a;
}

while (b%a != 0)
{
    gcd = b%a;
    b = a;
    a = gcd;
    
}


printf("gcd is %d ",gcd);
    return 0;
}