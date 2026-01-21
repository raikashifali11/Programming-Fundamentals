#include<stdio.h>

int countOdd(int arr[],int n);

int main(){
    int array[] = {5,7,9,11,13,15,2,3,23,32,223};
    printf("Odd numbers in array are %d",countOdd(array,11));
    
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 != 0)  // odd number
        {
            count++;
        }
        
    }
    
    return count;
}