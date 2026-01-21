#include<stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    FILE* fptr;

    fptr = fopen("testfile.txt","w");
    fputc('k', fptr);                    //writing a character
    fputc('a', fptr);
    fputc('s', fptr);
    fputc('h', fptr);
    fputc('o', fptr);
    fputc('o', fptr);


    fptr = fopen("testfile.txt","r");
    printf("%c",fgetc(fptr));           //reading character from a file
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);
    return 0;
}