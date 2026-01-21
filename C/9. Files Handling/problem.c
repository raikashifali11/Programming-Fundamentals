// get user information and store it in a file
#include<stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("problem.txt","w"); // opening a textfile

    char name[100];
    int roll;
    float cgpa;

    printf("Enter name: ");
    scanf("%s",&name);

    printf("Enter roll number: ");
    scanf("%d",&roll);

    printf("Enter cgpa:");
    scanf("%f",&cgpa);

    fprintf(fptr, "Student name = %s\n",name);
    fprintf(fptr, "Student rollNo = %d\n",roll);
    fprintf(fptr, "Student cgpa = %f\n",cgpa);

    fclose(fptr);                    //closing a textfile
    return 0;
}