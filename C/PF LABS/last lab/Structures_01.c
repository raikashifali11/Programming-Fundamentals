#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s);
int main(){
    struct student s1 = {"Mohid",501,3.70};
    struct student s2 = {"Rai",502,3.66};
    struct student s3 = {"Umar",503,3.94};
    struct student s4 = {"Azeem",504,4.00};
    struct student s5 = {"Talha",505,3.89};

    printInfo(s1);
    printInfo(s2);
    printInfo(s3);
    printInfo(s4);
    printInfo(s5);

    return 0;
}
void printInfo(struct student s){
    printf("\nstudent name = %s\n",s.name);
    printf("student roll = %d\n",s.roll);
    printf("student cgpa = %f\n",s.cgpa);
    
}