// Write a program to check if two arrays are equal in terms of their elements and their order
#include<stdio.h>

int main(){
    int array1[] = {1,2,3,4,5};
    int array2[] = {1,2,3,4,5};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    if (size1 != size2)
    {
        printf("Arrays are not equal.\n");
        return 0;
    }

    for (int i = 0; i < size1; i++)
    {
        
            if (array1[i] != array2[i])
            {
                printf("Arrays are not equal.\n");
                return 0;
            }   
    }
    
    printf("Arrays are equal in terms of elements and order.\n");
    
    return 0;
}