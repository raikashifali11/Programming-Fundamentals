#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("test.txt","r");      // opening a file through file pointer

    int number;
    fscanf(fptr,"%d",&number);         // %d to access integer data from a file and storing in integer variable c
    printf("character = %d\n",number);

    fscanf(fptr,"%d",&number);
    printf("character = %d\n",number);

    fscanf(fptr,"%d",&number);
    printf("character = %d\n",number);

    fscanf(fptr,"%d",&number);
    printf("character = %d\n",number);

    fscanf(fptr,"%d",&number);
    printf("character = %d\n",number);

    fclose(fptr);                      // always close a file when open it
    
    return 0;
}