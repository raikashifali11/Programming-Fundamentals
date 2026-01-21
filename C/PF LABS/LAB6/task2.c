#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size/2; i++)
    {
        int firstElement = arr[i];
        int lastElement = arr[size-i-1];

        arr[i] = lastElement;
        arr[size-i-1] = firstElement;
    }

    for (int i = 0; i < size; i++)
    {
         printf("%d",arr[i]);
    }
    
    return 0;
}