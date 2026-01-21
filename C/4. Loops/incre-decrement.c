#include<stdio.h>

int main(){
    // increment operator
    // i++ (post)
    // ++i (pre)

    printf("Increment Example:\n");
    int a = 5;
    printf("%d\n",++a);   // increment then use
    printf("%d\n",a++);   // use then increment
    printf("%d\n",a);     

    // decrement operator
    // i-- (post)
    // --i (pre)

    printf("Decrement Example:\n");
    int b = 10;
    printf("%d\n",--b);   // decrement then use
    printf("%d\n",b--);   // use then deccrement
    printf("%d\n",b);     



    return 0;
}