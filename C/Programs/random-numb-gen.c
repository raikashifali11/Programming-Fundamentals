#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(NULL));
    for (int i = 0; i < 200; i++)
    {
        // numbers range will be 11 --- 30  

        int randomNumber = (rand()%20+11); // Help -> %20 means total numbers range will 20 (0-19) and +11 means shift first 11 numbers with 11 numbers after 19 
        
        printf("%d\n",randomNumber);
    } 
    return 0;
}