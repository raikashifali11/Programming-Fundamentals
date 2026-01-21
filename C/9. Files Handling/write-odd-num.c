#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("write-odd.txt","w");

    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr,"%d\n",i);
        }
        
    }
    fclose(fptr);
    return 0;
}