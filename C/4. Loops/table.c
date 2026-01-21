#include<stdio.h>

int main(){
int number;
int count;
printf("Enter a number for table: ");
scanf("%d",&number);
printf("Enter a number for Size of table: ");
scanf("%d",&count);

for (int i = 1; i <= count; i++)
{
    printf("%d\n",number*i);
}
    return 0;
}