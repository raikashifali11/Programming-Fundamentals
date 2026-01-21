#include<stdio.h>

int main(){
    int number;
    char character;
    float pi;

    printf("Enter a character: ");
    scanf("%c",&character);
    printf("Character is %c\n",character);

    printf("Enter a number: ");
    scanf("%d",&number);
    printf("Number is %d\n",number);

    printf("Enter value of pi: ");
    scanf("%f",&pi);
    printf("pi is %f\n",pi);
    
    return 0;
}