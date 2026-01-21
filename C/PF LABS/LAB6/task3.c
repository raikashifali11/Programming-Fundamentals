#include<stdio.h>

int main(){
    int arr[] = {3,2,1,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    { 
        if (max<arr[i])
        {
            max = arr[i];
        }
        if (min>arr[i])
        {
            min = arr[i];
        } 
    }
    printf("Min: %d \nMax: %d",min,max);
    
    
    return 0;
}