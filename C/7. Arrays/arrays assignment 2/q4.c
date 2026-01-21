// Write a program to find the maximum product of two integers in an array
#include<stdio.h>

int main(){
    int array[] = {1,3,2,4,5,7,3};
    int size = sizeof(array)/sizeof(array[0]);
    int maxProduct = array[0]*array[1];
    for (int i = 2; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]*array[j] > maxProduct)
            {
                maxProduct = array[i]*array[j];
            }   
        }    
    }
    
    printf("Maximum product of two integers in array is: %d",maxProduct);
    
    return 0;
}