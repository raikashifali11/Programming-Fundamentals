 #include<stdio.h>
 
 int main(){
    FILE* fptr;
    fptr = fopen("newtest.txt","w"); //file opening to write

    fprintf(fptr,"%c",'R');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'i');
    fprintf(fptr,"%c",' ');
    fprintf(fptr,"%c",'K');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'i');
    fprintf(fptr,"%c",'f');
    fprintf(fptr,"%c",' ');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'i');

    fclose(fptr);                   // file closing
    return 0;
 }