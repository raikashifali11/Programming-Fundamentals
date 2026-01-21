#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int array1[10];
    int array2[10];
    int array3[10];
    int sum[10];
    for (int i = 0; i < 10; i++){
        array1[i] = rand()%9+1; 
        array2[i] = rand()%9+1; 
    }
    for (int i = 0; i < 10; i++)
        sum[i] = array1[i] + array2[i];
    printf("Add two elements:\n");
    for (int i = 0; i < 10; i++)
    {
    printf("%d + %d = ",array1[i],array2[i]);
    scanf("%d",&array3[i]);
    }
    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        if (sum[i] == array3[i])
            score++; 
    }
    printf("Score %d/10\n",score);
    printf("Incorrect\tCorrect\n");
    for (int i = 0; i < 10; i++)
    {
        if (sum[i] != array3[i])
        {
            printf("%d + %d = %d\t",array1[i],array2[i],array3[i]);
            printf("%d + %d = %d\n",array1[i],array2[i],sum[i]);
        }
    } 
    return 0;
}