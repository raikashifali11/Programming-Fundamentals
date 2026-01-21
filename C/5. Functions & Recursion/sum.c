#include<stdio.h>

int sum(int x, int y);

int main(){
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Sum is %d ",sum(a,b));
    
    return 0;
}

int sum(int x, int y){
    return x+y;
}