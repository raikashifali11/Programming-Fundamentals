#include<stdio.h>

int main(){
    //Break will exit from entire loop

    printf("Break Statement Example: \n");
    for (int i = 1; i <= 10; i++)
    {
        if( i == 6 ){
            break;         // i=6 --> loop terminate
        }
        printf("%d\n",i);
    }

    //Continue Will skip that iteration only
    printf("Continue Statement Example: \n");
    for (int i = 10; i <= 20; i++)
    {
        if (i == 15)
        {
            continue;      // i=15 --> skiped from loop
        }
        printf("%d\n",i);

        
    }
    
    
    return 0;
}