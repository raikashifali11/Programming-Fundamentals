#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
int a = 0;
int b = 1;
int c;
printf("Fibnacci Sequence is:\n");
printf("%d\t",a);
printf("%d\t",b);

for (int i = 1; i <= number; i++)
{
    printf("%d\t",c = a+b);
    a = b;
    b = c;
}

    return 0;
}