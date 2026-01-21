// Initialize an array of 10 elements with random values in range 3-7. For each element
// print stars in single line. 
// Sample Run:
// 3 6 4 3 4 6 7 5 3 3
// ***
// ******
// ****
// ***
// ****
// ******
// *******
// *****
// ***
// ***
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand()%5+3;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < array[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}