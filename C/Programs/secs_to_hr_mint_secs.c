#include<stdio.h>

int main(){
    // Convert seconds to hours minutes seconds
    int sec;
    printf("Enter seconds: ");
    scanf("%d",&sec);
    int h = sec/3600;
    int m = (sec-(h*3600))/60;
    int s = sec-(h*3600)-(m*60);  
    printf("Number of hours: %d\n",h);
    printf("Number of minutes: %d\n",m);
    printf("Number of seconds: %d\n",s);
    



    return 0;
}