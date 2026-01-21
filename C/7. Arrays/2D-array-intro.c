#include<stdio.h>

int main(){
    int marks[2][4]; // in memory array will be in this form -->  |----|----| and so on

    // input:
    // first student [0] ke 4 subjects ke marks
    
    marks[0][0] = 50;    // 1st student [0] ke first subject [0] ke marks
    marks[0][1] = 55;    // 1st student [0] ke second subject [1] ke marks
    marks[0][2] = 60;    // 1st student [0] ke third subject [2] ke marks
    marks[0][3] = 65;    // 1st student [0] ke fourth subject [3] ke marks

    // second student [1] ke 4 subjects ke marks

    marks[1][0] = 95;    // 2nd student [1] ke first subject [0] ke marks 
    marks[1][1] = 99;    // 2nd student [1] ke second subject [1] ke marks
    marks[1][2] = 90;    // 2nd student [1] ke third subject [2] ke marks
    marks[1][3] = 98;    // 2nd student [1] ke fourth subject [3] ke marks

    //output
    printf("First Student marks\n");
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[0][2]);
    printf("%d\n",marks[0][3]);
 
    printf("Second Student marks\n");
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);
    printf("%d\n",marks[1][3]);
    return 0;
}