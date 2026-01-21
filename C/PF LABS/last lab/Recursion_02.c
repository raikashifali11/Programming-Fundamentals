#include<stdio.h>
int gcd(int a, int b);

int main(){
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Gcd is %d",gcd(num1,num2));
    return 0;
}
int gcd(int a, int b){
    int r = a%b;
    if (r == 0)
        return b;
    else{ 
    // int c = a;   
    a = b;
    b = r;  
    return gcd(a,b);
    }
}