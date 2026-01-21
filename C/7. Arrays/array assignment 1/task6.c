// Initialize an array of 10 elements with random values in range 3-7. Print elements of
// array in triangular style. Also, print the sum of elements.
// Sample Run:
// 7 4 7 3 4 6 6 7 3 5 
// 7 = 7
// 7 4 = 11
// 7 4 7 = 18
// 7 4 7 3 = 21
// 7 4 7 3 4 = 25
// 7 4 7 3 4 6 = 31
// 7 4 7 3 4 6 6 = 37
// 7 4 7 3 4 6 6 7 = 44
// 7 4 7 3 4 6 6 7 3 = 47
// 7 4 7 3 4 6 6 7 3 5 = 52
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
        printf("%d",array[i]);
    }
    printf("\n");
    
    //print in triangular style with sum
    
    for (int i = 0; i < 10; i++){
        int sum = 0;
        for (int j = 0; j <= i; j++)
        { 
        sum = sum + array[j];
        printf("%d ",array[j]);
        }
        printf("= %d\n",sum);
    }
    return 0;
}