// Task 01: Declare a list of 10 elements. Initialize elements at random (with any range of your 
// choice).
// Print elements in single line. Find and print average. Subtract all element from average. Print 
// elements again in single line. Next, count and print number of negative elements and number of 
// positive
// elements.
// Sample Runs:
// Length: 10
// 37 17 61 95 51 72 12 49 80 92
// Average: 56.60
// -19.60 -39.60 4.40 38.40 -5.60 15.40 -44.60 -7.60 23.40 35.40
// Count of positive values: 5
// Count of negative values: 5

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