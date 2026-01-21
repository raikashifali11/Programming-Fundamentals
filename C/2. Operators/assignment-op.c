#include<stdio.h>

int main(){
    int a = 3;
    a += 3;      // a = a + 3  -->  a = 6
    int b = a;
    b -= 1;      // b = b - 1  -->  b = 5
    int c = a+b;
    c *= 3;      // c = c * 3  -->  c = 33
    int d = 99;
    d /= c;      // d = d / c  -->  d = 3


    printf("a is %d\n",a);
    printf("b is %d\n",b);
    printf("c is %d\n",c);
    printf("d is %d\n",d);


    return 0;
}