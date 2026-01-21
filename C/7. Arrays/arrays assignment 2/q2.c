// Write a program to reverse an array.
#include<stdio.h>

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size/2; i++)
    {
        int firstElement = array[i];
        int lastElement = array[size-i-1];
        array[i] = lastElement;
        array[size-i-1] = firstElement;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
