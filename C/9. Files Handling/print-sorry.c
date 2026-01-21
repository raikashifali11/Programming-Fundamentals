#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("print-sorry.txt","w");
    
    for (int i = 1; i <= 100; i++)
    {
        fprintf(fptr,"%s\n","sorry");
    }

    fclose(fptr);

    return 0;
}