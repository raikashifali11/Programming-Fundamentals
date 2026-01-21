#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int num1 = rand()%5+1;
    int num2 = rand()%5+1;
    int num3 = rand()%5+1;
    printf("%d %d %d\n",num1,num2,num3);
    if ((num1 == num2) && (num2 == num3))
        printf("All are same\n");
    else
        printf("All are different\n");
    if (num1>num2 && num1>num3)
        printf("First is largest\n");
    else if(num2>num1 && num2>num3)
        printf("Second is largest\n");
    else if(num3>num1 && num3>num2)
        printf("Third is largest\n");

    if (num1<num2 && num1<num3)
        printf("First is smallest\n");
    else if(num2<num1 && num2<num3)
        printf("Second is smallest\n");
    else if(num3<num1 && num3<num2)
        printf("Third is smallest\n");
    
    if (num1>num3 && num2>num3)
        printf("First and second are greater than third\n");
    else if(num1>num2 && num3>num2)
        printf("First and third are greater than second\n");
    else if(num2>num1 && num3>num1)
        printf("Second and third are greater than first\n");
    
    if (num1>num2 && num2<num3 && num1<num3)
        printf("First is in middle of second and third\n");
    else if(num1<num2 && num2<num3 && num1<num3)
        printf("Second is in middle of first and third\n");
    else if(num1<num3 && num3<num2 && num1<num3)
        printf("Third is in middle of first and second\n");
    
    return 0;
}