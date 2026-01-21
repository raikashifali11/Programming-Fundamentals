#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("sum.txt","r");           //read mode
    int a;
    int b;
    fscanf(fptr,"%d",&a);    // value from text file is stored in our variable a
    fscanf(fptr,"%d",&b);    // value from text file is stored in our variable b
    fclose(fptr);

    int sum = a + b;
    
    fptr = fopen("sum.txt","w");           //write mode
    fprintf(fptr,"%d\n",sum);
    fclose(fptr);
    return 0;
}