#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};


int main(){
    struct student s1 = {"Mohid",501,3.70};
    struct student s2 = {"Rai",502,3.66};
    struct student s3 = {"umar",503,3.94};

    printf("\nstudent s1\n");
    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %f\n",s1.cgpa);
    
    printf("\nstudent s2\n");
    printf("student name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %f\n",s2.cgpa);
    
    printf("\nstudent s3\n");
    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);
    
    return 0;
}