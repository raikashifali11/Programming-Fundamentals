// by using typedef we give nickname to our data type which has very long name
#include<stdio.h>
#include<string.h>
typedef struct computerEngineeringStudent
{
    char name[100];
    int roll;
    float cgpa;
} coe;             // coe is nickname for struct computerEngineeringStudent 


int main(){
    coe s1 = {"Mohid",501,3.70};
    coe s2 = {"Rai",502,3.66};
    coe s3 = {"umar",503,3.94};

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