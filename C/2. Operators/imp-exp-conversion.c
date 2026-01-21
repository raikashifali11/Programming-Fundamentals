#include<stdio.h>

int main(){

    //implicit conversion by compiler
    int a = 1.9999999;
    printf("%d\n",a);

    //explicit conversion by programmer
    int b = (int) 1.999999;
    printf("%d\n",b);

    return 0;
}