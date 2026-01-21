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