#include<stdio.h>
#include<string.h>

// Structure is a user defined data type which is collection of different data types
    struct student
    {
        int roll;
        float cgpa;
        char name[100];
    };

int main(){
    struct student s1;
    // s1.name = "kashif";   // this will give error because char array can't be modified
    strcpy(s1.name,"kashif");
    s1.roll = 502;
    s1.cgpa = 3.66;

    printf("\nStudent s1 data:\n");
    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    
    struct student s2;
    strcpy(s2.name,"umar");
    s2.roll = 503;
    s2.cgpa = 3.94;
    printf("\nStudent s2 data:\n");
    printf("student name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);

    struct student s3;
    strcpy(s3.name,"azeem");
    s3.roll = 527;
    s3.cgpa = 3.40;
    printf("\nStudent s3 data:\n");
    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);
  
    return 0;
}