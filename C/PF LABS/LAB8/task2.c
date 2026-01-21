#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int array[10];
    for (int i = 0; i < 10; i++)
        array[i] = rand()%20+11;
    int max1 = 0, max2 = 0, total = 0, total2 = 0; 
    float avg1,avg2;
    for (int i = 0; i < 10; i++){
        printf("%d ",array[i]);
        total = total + array[i];
        if (max1<array[i])
            max1 = array[i];
    }
    avg1 = (float)total/10;
    printf("\nMax: %d\n",max1);
    printf("Average: %.2f\n",avg1);
    for (int i = 0; i < 10; i++)
    {
        if (array[i]%2 != 0)
            array[i] = array[i] + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j <= i+1; j++)
        {
            if (array[i]==array[j])
            {
                array[j] = array[j]+2;
            }
            
        }   
    }
    for (int i = 9; i >= 0; i--)
        {
            for (int j = i-1; j>= i-1; j--)
            {
                if (array[i]==array[j])
            {
                array[j] = array[j]+2;
            }
                
            }
            
        }
    for (int i = 0; i < 10; i++){
        printf("%d ",array[i]);
        total2 = total2 + array[i];
        if (max2<array[i])
            max2 = array[i];
    }
    avg2 = (float)total2/10;
    
    printf("\nMax: %d\n",max2);
    printf("Average: %.2f\n",avg2);
    printf("Difference of Max: %d\n",max2-max1);
    printf("Difference of Averages: %.2f\n",avg2-avg1);
    return 0;
}