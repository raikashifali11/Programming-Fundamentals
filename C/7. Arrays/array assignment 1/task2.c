//  Declare a list of 30 elements to store marks of 30 students of a class. Initialize 
// elements at random in range 1-100. The management is interested to divide students in three 
// categories i.e., failures, above average and below average. For this purpose, calculate average of 
// passed students only.
// Do following tasks in steps:
// - Initialize marks and print in single line
// - Print marks in a single line
// - count number of pass students (students with 50 or more marks are pass)
// - sum number of pass students
// - calculate and print average of pass students
// - Next, print marks of fail students in single line
// - Next, print marks of students with above average
// - Lastly, print marks of student with below average
// Note: Run different loop for each step
// Sample Runs:
// Marks: 80 66 97 69 90 77 92 45 14 50 5 79 73 94 62 91 18 89 63 35 11 10 49 1 46 52 82 41 35 99
// Average: 78.06
// Marks of Fail Students: 45 14 5 18 35 11 10 49 1 46 41 35
// Marks of Students Above Average: 80 97 90 92 79 94 91 89 82 99
// Marks of Students Below Average: 66 69 77 45 14 50 5 73 62 18 63 35 11 10 49 1 46 52 41 35
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int marks[30];
    for (int i = 0; i < 30; i++){
        marks[i] = rand()%100+1;}
        
int pass[30];
int passed = 0;
int fail[30];
int failed = 0;
int j=0,k=0;
    //print marks
    for (int i = 0; i < 30; i++)
        printf("%d ",marks[i]);
    printf("\n");

    for (int i = 0; i < 30; i++)
    {
        if (marks[i]<50)
        {
            fail[j] = marks[i];
            failed++;
            j++;
        }
        else{
            pass[k] = marks[i];
            passed++;
            k++;
        }   
    }
    int total = 0;
    for (int i = 0; i < passed; i++)
        total = total + pass[i];
    float average = (float)total/passed;
    printf("Average: %.2f\n",average);
    printf("Marks of Fail Students: ");
    for (int i = 0; i < failed; i++)
        printf("%d ",fail[i]);

printf("\nMarks of Students Above Average: ");
    for (int i = 0; i < 30; i++)
        if (marks[i] > average)
            printf("%d ",marks[i]);
printf("\nMarks of Students Below Average: ");
    for (int i = 0; i < 30; i++)
        if (marks[i] < average)
            printf("%d ",marks[i]);

    return 0;
}