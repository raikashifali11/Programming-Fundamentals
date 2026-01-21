// Write a program to find the smallest element in an unsorted array
#include<stdio.h>

int main(){
    int array[] = {5,2,4,6,3,2,1,9,7};
    int size = sizeof(array)/sizeof(array[0]);

    int smallest = array[0];
    for (int i = 1; i < size; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
        }  
    }
    // Smallest element
    printf("Smallest element in array is %d",smallest);
    
    return 0;
}