#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if (marks >= 85 && marks <= 100)
    {
       printf("You got Grade letter A\n");
       printf("You got Grade point 4.00\n");
    }
    
    else if (marks >= 80 && marks <= 84)
    {
       printf("You got Grade letter A-\n");
       printf("You got Grade point 3.70\n");
    }
    
    else if (marks >= 75 && marks <= 79)
    {
       printf("You got Grade letter B+\n");
       printf("You got Grade point 3.30\n");
    }
    
    else if (marks >= 70 && marks <= 74)
    {
       printf("You got Grade letter B\n");
       printf("You got Grade point 3.00\n");
    }
    
    else if (marks >= 65 && marks <= 69)
    {
       printf("You got Grade letter B-\n");
       printf("You got Grade point 2.70\n");
    }
    
    else if (marks >= 61 && marks <= 64)
    {
       printf("You got Grade letter C+\n");
       printf("You got Grade point 2.30\n");
    }
    else if (marks >= 58 && marks <= 60)
    {
       printf("You got Grade letter C\n");
       printf("You got Grade point 2.00\n");
    }
    else if (marks >= 55 && marks <= 57)
    {
       printf("You got Grade letter C-\n");
       printf("You got Grade point 1.70\n");
    }
    else if (marks >= 50 && marks <= 54)
    {
       printf("You got Grade letter D\n");
       printf("You got Grade point 1.00\n");
    }
    else if (marks < 50 && marks >= 0)
    {
       printf("You got Grade letter F\n");
       printf("You got Grade point 0.00\n");
    }
    else{
        printf("You have entered wrong marks");
    }
    
    return 0;
}