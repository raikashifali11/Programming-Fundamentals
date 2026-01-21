//write a program to allocate memory of size n (n*sizeof(int)), where n is entered by the user
#include<stdio.h>
#include<stdlib.h>


int main(){
    int* ptr;
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));
    printf("Enter numbers:\n");
    for (int i = 0; i < n+1; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Numbers are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);  
    return 0;
}
