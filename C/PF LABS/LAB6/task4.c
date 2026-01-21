#include<stdio.h>

int main(){
    int arr[] = {1,1,2,2,3,3,3,4,4,5,6,6,7,7,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1 ; j < size; j++)
        {
        
        if (arr[j] == arr[i])
        {
            arr[i] = -1;
        }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d",arr[i]);
        }
        
    }
    return 0;
}