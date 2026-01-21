#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("File.txt","a");
    fprintf(fptr,"\nI am a programmer");
    fclose(fptr);
    return 0;
}