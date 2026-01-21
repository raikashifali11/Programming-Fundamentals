#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("newtest.txt","w"); // if file doesn't exist then it creates a file
    fclose(fptr);
    return 0;
}