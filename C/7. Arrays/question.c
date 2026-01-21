// sum of all even elements in array

#include<stdio.h>

int main(){
    int array[] = {4,3,2,2,6,7,8,3,3,6,8};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]%2 == 0)
        {
            sum = sum + array[i];
        }   
    }
    printf("Sum is %d",sum);
    return 0;
}