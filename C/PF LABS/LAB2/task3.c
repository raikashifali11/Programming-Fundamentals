#include<stdio.h>

int main(){
    int x1 = 2;
    int x2 = 3;
    int answer1 = (x1*x1) + (x2*x2) + (2*x1*x2);
    int answer2 = (x1*x1) + (1/(x2*x2)) - 2;
    int answer3 = (x1+x2)*(x1-x2);
    printf("x1*x1 + x2*x2 + 2*x1*x2 : %d\n",answer1);
    printf("x1*x1 + 1/(x2*x2) - 2 : %d\n",answer2);
    printf("(x1+x2)*(x1-x2) : %d\n",answer3);

    return 0;
}