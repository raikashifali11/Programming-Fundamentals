#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter first number :\n ");
    scanf("%f",&a);
    printf("Enter Second number :\n ");
    scanf("%f",&b);
    
    printf("Enter third number :\n ");
    scanf("%f",&c);
    printf("The average of three numbers is :\n%f",(a+b+c)/3);
return 0;
}