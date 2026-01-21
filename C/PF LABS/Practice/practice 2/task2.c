#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void storeMarks(int marks[30][3]);
void calculateGrade(int marks[30][3], char grades[30][2],int totalMarks[30]);
void printMarks(int marks[30][3], char grades[30][2],int totalMarks[30]);
void calculateResults(int marks[30][3], char grades[30][2],int totalMarks[30]);

int main(){
    int marks[30][3];
    char grades[30][2];
    int totalMarks[30];
    storeMarks(marks);
    calculateGrade(marks,grades,totalMarks);
    printMarks(marks,grades,totalMarks);
    calculateResults(marks,grades,totalMarks);

    return 0;
}

//store marks
void storeMarks(int marks[30][3]){
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
     marks[i][0] = rand()%36;  
     marks[i][1] = rand()%41;
     marks[i][2] = rand()%26;
    }  
}

//calculate grade
void calculateGrade(int marks[30][3], char grades[30][2],int totalMarks[30]){
    for (int i = 0; i < 30; i++)
    {
    totalMarks[i]=marks[i][0]+marks[i][1]+marks[i][2];
     if (totalMarks[i] >= 85)
            grades[i][0] = 'A',grades[i][1] = ' '; 
        else if (totalMarks[i] >= 80)
            grades[i][0] = 'A', grades[i][1] = '-';
        else if (totalMarks[i] >= 75)
            grades[i][0] = 'B',grades[i][1] = '+';
        else if (totalMarks[i] >= 70)
            grades[i][0] = 'B',grades[i][1] = ' ';
        else if (totalMarks[i] >= 65)
            grades[i][0] = 'B',grades[i][1] = '-';
        else if (totalMarks[i] >= 61)
            grades[i][0] = 'C',grades[i][1] = '+';
        else if (totalMarks[i] >= 58)
            grades[i][0] = 'C',grades[i][1] = ' ';
        else if (totalMarks[i] >= 55)
            grades[i][0] = 'C',grades[i][1] = '-';
        else if (totalMarks[i] >= 50)
            grades[i][0] = 'D',grades[i][1] = ' ';
        else
            grades[i][0] = 'F',grades[i][1] = ' ';
    }  
}

//print marks sheet        
void printMarks(int marks[30][3], char grades[30][2],int totalMarks[30]){
    printf("Roll No\t\tMid\tFinal\tSessional\tTotal\tGrade\n");
    for (int i = 0; i < 30; i++)
    {
    printf("%d\t\t%d\t%d\t%d\t\t%d\t%c%c\n",i+1,marks[i][0],marks[i][1],marks[i][2],totalMarks[i],grades[i][0],grades[i][1]);
    }
       
}

//calculate results and print
void calculateResults(int marks[30][3], char grades[30][2],int totalMarks[30]){

    int pass = 0;
    int maxMarks=0 ,minMarks=100,maxMidMarks=0 ,minMidMarks=35 ,maxFinalMarks=0 ,minFinalMarks=40 ,maxSessionalMarks=0 ,minSessionalMarks=25;

    for (int i = 0; i < 30; i++)
    {
        if (grades[i][0]!='F')
        {
            pass++;
        }
        if (maxMarks<totalMarks[i])
        {
            maxMarks = totalMarks[i];
        }
        if (totalMarks[i]<minMarks)
        {
            minMarks = totalMarks[i];
        }
        if (maxMidMarks<marks[i][0])
        {
            maxMidMarks = marks[i][0];
        }
        if (marks[i][0]<minMidMarks)
        {
            minMidMarks = marks[i][0];
        }
        if (maxFinalMarks<marks[i][1])
        {
            maxFinalMarks = marks[i][1];
        }
        if (marks[i][1]<minFinalMarks)
        {
            minFinalMarks = marks[i][1];
        }
        if (maxSessionalMarks<marks[i][2])
        {
            maxSessionalMarks = marks[i][2];
        }
        if (marks[i][2]<minSessionalMarks)
        {
            minSessionalMarks = marks[i][2];
        }
    }
    int total=0, totalMid=0, totalFinal=0, totalSessionals=0;
    float averageMarks,averageMidMarks,averageFinalMarks,averageSessionalsMarks;
    for (int i = 0; i < 30; i++)
    {
        total = total + totalMarks[i];
        totalMid = totalMid + marks[i][0];
        totalFinal = totalFinal + marks[i][1];
        totalSessionals = totalSessionals + marks[i][2];
    }
    averageMarks = (float)total/30;
    averageMidMarks = (float)totalMid/30;
    averageFinalMarks = (float)totalFinal/30;
    averageSessionalsMarks = (float)totalSessionals/30;

    printf("\nTotal: 30\n");
    printf("Pass: %d\n", pass);
    printf("Fail: %d\n", 30-pass);
    printf("Overall Average Marks: %.1f\n", averageMarks);
    printf("Average Midterm Marks: %.1f\n", averageMidMarks);
    printf("Average Sessional Marks: %.1f\n", averageSessionalsMarks);
    printf("Average Final term Marks: %.1f\n", averageFinalMarks);
    printf("Maximum Marks: %d\n", maxMarks);
    printf("Maximum Midterm Marks: %d\n", maxMidMarks);
    printf("Maximum Sessional Marks: %d\n", maxSessionalMarks);
    printf("Maximum Final term Marks: %d\n", maxFinalMarks);
    printf("Minimum Marks: %d\n", minMarks);
    printf("Minimum Midterm Marks: %d\n", minMidMarks);
    printf("Minimum Sessional Marks: %d\n", minSessionalMarks); 
    printf("Minimum Final term Marks: %d\n", minFinalMarks);
    
}
