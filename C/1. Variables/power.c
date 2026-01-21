#include<stdio.h>
#include<math.h>

int main(){
    
    int number;
    int power;
    
    printf("Enter a number ");
    scanf("%d",&number);
    

    printf("Enter power ");
    scanf("%d",&power);
    

    int Power=pow(number,power);

    printf("%d^%d is equal to %d",number,power,Power);

    return 0;
}