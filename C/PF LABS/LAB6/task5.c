#include<stdio.h>

int main(){
    int arr1[] = {1,5,3,8,9,10};
    int arr2[] = {2,6,4,7};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int newarr[10];
    // by adding array 1 into new array
    for (int i = 0; i < size1; i++)
    {
        newarr[i] = arr1[i];
    }
    // by adding array 2 into new array
    for (int i = 0; i < size2; i++)
    {
        newarr[i+size1] = arr2[i];
    }
    // for sorting new array
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
        
        if (newarr[i]>newarr[j])
        {
            int a = newarr[j];
            newarr[j] = newarr[i];
            newarr[i]= a;
        }
        }
    // printing new array 
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d",newarr[i]);
    }

    return 0;
}