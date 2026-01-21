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
        