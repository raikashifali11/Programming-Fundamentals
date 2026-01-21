// Array name is pointer which points at 0th index of array
// int* ptr = &arr[0]; == int* ptr = arr;
#include<stdio.h>

int main(){
    // Traverse in an array
    int marks[5];
    int* ptr = &marks[0];  // it can also be written as int* ptr = marks; 

    //input
    printf("input:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ",i);
        scanf("%d",&marks[i]);
    }
    //output
    printf("output:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i,marks[i]);
    }
    
    
    return 0;
}