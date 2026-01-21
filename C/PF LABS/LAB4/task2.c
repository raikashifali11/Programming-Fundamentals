#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int num1, num2, num3, num4;

    num1 = rand()%5+1;
    num2 = rand()%5+1;
    num3 = rand()%5+1;
    num4 = rand()%5+1;

    printf("%d\t%d\t%d\t%d\n",num1,num2,num3,num4);
    
    if ((num1 == num2) && (num1 == num3) && (num3 == num4))
    {
        printf("All are same");
    }
    else if ((num1 == num2 && num1 == num3) || (num1 == num3 && num1 == num4) || (num2 == num1 && num2 == num3) || (num2 == num3 && num2 == num4) || (num3 == num1 && num3 == num2) || (num3 == num2 && num2 == num4) || (num4 == num1 && num4 == num2) || (num4 == num1 && num4 == num3))
    {
        printf("Three are same and one is different");
    }
    else if (num1 == num2 || num1 == num3 || num1 == num4 || num3 == num4 ||num2 == num3 || num2 == num4)
    {
        printf("Two are same and two are different");
    }
    else
    {
        printf("All are different"); 
    }      
    return 0;
}