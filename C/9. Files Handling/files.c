#include<stdio.h>

int main(){

    FILE* fptr;                       // file pointer (fptr)
    fptr = fopen("test.txt","r");     // file opening to read(r)
    // fclose(fptr);                  // file closing

    if(fptr == NULL){
        printf("file doesn't exist");
    }else{
        fclose(fptr);
    }

    return 0;
}