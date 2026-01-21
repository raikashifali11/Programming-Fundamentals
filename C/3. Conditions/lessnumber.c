#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    if (a<b)
    {
        printf("The first number %d is smaller. \n",a);
        printf("The second number %d is larger. \n",b);
    }
    
    if(a>b){
        printf("The first number %d is larger. \n",a);
        printf("The second number %d is smaller. \n",b);
    }
    
    return 0;
}