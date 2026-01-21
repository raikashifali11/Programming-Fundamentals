#include<stdio.h>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    
    int array[]= {1,2,3,4,5,6,7,8,9,10};

    reverseArray(array,10);            
    printArray(array,10);
    
    return 0;
}

void reverseArray(int arr[], int n){   
    for (int i = 0; i < n/2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        arr[i] = secondValue;
        arr[n-i-1] = firstValue;  
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
