#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first side of a rectangle :\n");
    scanf("%d",&a);
    printf("Enter Second side of a rectangle :\n");
    scanf("%d",&b);
    printf("The perimeter of a rectangle is :\n%d",2*(a+b));
return 0;
}