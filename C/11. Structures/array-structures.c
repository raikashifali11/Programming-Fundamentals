#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};


int main(){
    struct student cs[100];

    cs[0].roll = 501;
    cs[0].cgpa = 3.70;
    strcpy(cs[0].name,"Mohid");

    cs[1].roll = 502;
    cs[1].cgpa = 3.66;
    strcpy(cs[1].name,"Rai");

    cs[2].roll = 503;
    cs[2].cgpa = 3.94;
    strcpy(cs[2].name,"umar");

    printf("\nstudent 1\n");
    printf("student name = %s\n",cs[0].name);
    printf("student roll = %d\n",cs[0].roll);
    printf("student cgpa = %f\n",cs[0].cgpa); 
    
    printf("\nstudent 2\n");
    printf("student name = %s\n",cs[1].name);
    printf("student roll = %d\n",cs[1].roll);
    printf("student cgpa = %f\n",cs[1].cgpa); 
    
    printf("\nstudent 3\n");
    printf("student name = %s\n",cs[2].name);
    printf("student roll = %d\n",cs[2].roll);
    printf("student cgpa = %f\n",cs[2].cgpa); 
    
    return 0;
}