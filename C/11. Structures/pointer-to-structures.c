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
    
    struct student* ptr = &s1;

    printf("student s1 name = %s\n",(*ptr).name);
    printf("student s1 roll = %d\n",(*ptr).roll);
    printf("student s1 cgpa = %f\n",(*ptr).cgpa);
    printf("\n");

    // print by use of Arrow operator (->)
    printf("student s1 name = %s\n",ptr->name);
    printf("student s1 roll = %d\n",ptr->roll);
    printf("student s1 cgpa = %f\n",ptr->cgpa);


    
    return 0;
}