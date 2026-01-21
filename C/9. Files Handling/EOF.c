// reading a text file until EOF(end of file) reached.
#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("EOF.txt","r");
    
    char c;
    c = fgetc(fptr);
    while (c != EOF )
    {
        printf("%c",c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    
    return 0;
}