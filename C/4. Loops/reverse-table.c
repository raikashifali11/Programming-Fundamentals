#include<stdio.h>

int main(){
int number;
int count;
printf("Enter a number for table: ");
scanf("%d",&number);
printf("Enter a number for Size of table: ");
scanf("%d",&count);

for (int i = count; i >= 1; i--)
{
    printf("%d\n",number*i);
}
    return 0;
}