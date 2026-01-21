//  Write a program to sort the elements of an array in ascending order.
#include<stdio.h>

int main(){
    int array[] = {1,4,3,7,2,9,8,5,6};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }     
    }
    // Sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
    }
 
    return 0;
}
