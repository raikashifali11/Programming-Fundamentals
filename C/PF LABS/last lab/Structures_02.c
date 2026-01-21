// calculate average grade using structures
#include<stdio.h>
#include<string.h>
struct Student
{
    char name[100];
    int grades[5];
    float average;

};
void calGrade(struct Student *s1);

int main(){
    struct Student student1;
    printf("Enter student name: ");
    fgets(student1.name,50,stdin);
    printf("Enter grades:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&student1.grades[i]);
    }
    calGrade(&student1);
    printf("Student Name: %s",student1.name);
    printf("Student Average Grades: %.2f",student1.average);
    
    return 0;
}

void calGrade(struct Student *s1){
    int total = 0;
    for (int i = 0; i < 5; i++)
        total = total + s1->grades[i];

    s1->average =(float)total/5.0;
}