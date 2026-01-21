//write a program to allocate memory of size n (n*sizeof(int)), where n is entered by the user
#include<stdio.h>
#include<stdlib.h>


int main(){
    int* ptr;
    int n;
    printf("enter n ");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);        //free the memory that is allocated using calloc and malloc

    ptr = (int*) calloc(2,sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    
    return 0;
}
