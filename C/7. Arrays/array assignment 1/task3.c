// Declare a list of 12 elements to store monthly sales of XYZ Company. Initialize 
// elements at random (range 1000 to 2000) and print in single line. Company wants to do 
// different analysis. For example, difference of sale in first half of the year and second half of the 
// year. Difference of sales in each quarter.
// A year has two halves. First half has first six month and the second half has next six month. Print
// total sales in first & second half. There are four quarters of three months in a year. Like first 
// quarter has January, February & March. The second quarter has April, May & June. Print sales of 
// each quarter. (By adding sales of consecutive three months)
// Note: Run different loop for each step
// Sample Runs:
// 1081 1380 1789 1037 1865 1703 1549 1694 1526 1768 1557 1746
// Sale in Two Halves
// First Half: 8855
// Second Half: 9840
// Quarter Wise Sale
// Sale in Quarter 1: 4250
// Sale in Quarter 2: 4605
// Sale in Quarter 3: 4769
// Sale in Quarter 4: 5071
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int monthlySales[12];
    for (int i = 0; i < 12; i++)
        monthlySales[i] = rand()%1000+1000;
    for (int i = 0; i < 12; i++)
        printf("%d ",monthlySales[i]);
    
    // Six months wise
    printf("\nSale in Two Halves\n");
    int totalFirstHalf = 0;
    int totalSecondHalf = 0;
    for (int i = 0; i < 6; i++)
        totalFirstHalf += monthlySales[i];
    for (int i = 6; i < 12; i++)
        totalSecondHalf += monthlySales[i];
    printf("First Half: %d\n",totalFirstHalf);
    printf("Second Half: %d\n",totalSecondHalf);

    //Quarter wise
    printf("Quarter Wise Sale\n");
    int totalQuarter1 = 0,totalQuarter2 = 0,totalQuarter3 = 0,totalQuarter4 = 0;
    for (int i = 0; i < 3; i++)
        totalQuarter1 += monthlySales[i];
    for (int i = 3; i < 6; i++)
        totalQuarter2 += monthlySales[i];
    for (int i = 6; i < 9; i++)
        totalQuarter3 += monthlySales[i];
    for (int i = 9; i < 12; i++)
        totalQuarter4 += monthlySales[i];
    
    printf("Sale in Quarter 1: %d\n",totalQuarter1);
    printf("Sale in Quarter 2: %d\n",totalQuarter2);
    printf("Sale in Quarter 3: %d\n",totalQuarter3);
    printf("Sale in Quarter 4: %d\n",totalQuarter4);

    
    
    return 0;
}