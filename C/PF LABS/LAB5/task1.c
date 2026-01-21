#include<stdio.h>

int main(){
    double num1,num2,num3,num4;
    printf("Number 1: ");
    scanf("%lf",&num1);
    printf("Number 2: ");
    scanf("%lf",&num2);
    printf("Number 3: ");
    scanf("%lf",&num3);
    printf("Number 4: ");
    scanf("%lf",&num4);
    double avg = (num1+num2+num3+num4)/4;
    printf("Average: %.1lf\n",avg);
    
    if (num1>avg)
        printf("First number is larger than average\n");
    else
        printf("First number is smaller than average\n");
    if (num2>avg)
        printf("Second number is larger than average\n");
    else
        printf("Second number is smaller than average\n");
    if (num3>avg)
        printf("Third number is larger than average\n");
    else
        printf("Third number is smaller than average\n");
    if (num4>avg)
        printf("Fourth number is larger than average\n");
    else
        printf("Fourth number is smaller than average\n");
    return 0;
}