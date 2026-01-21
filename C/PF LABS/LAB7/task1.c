#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    float list[10];
    for (int i = 0; i < 10; i++)
        list[i] = rand()%100+1;
    
    printf("Length: 10\n");
    for (int i = 0; i < 10; i++)
        printf("%.0f ",list[i]);

    printf("\n");
    float total = 0;
    for (int i = 0; i < 10; i++)
        total = total + list[i];
    
    float average = total/10;
    printf("%.2f\n",average);

    for (int i = 0; i < 10; i++)
    {
        list[i] = list[i] - average;
        printf("%.2f ",list[i]);   
    }
    int countPositive = 0;
    int countNegative = 0;
    for (int i = 0; i < 10; i++)
    {
        if (list[i] < 0)
            countNegative++;
        else
            countPositive++;   
    }

    printf("\nCount of positive values: %d\n",countPositive);
    printf("Count of negative values: %d\n",countNegative);
   
    return 0;
}