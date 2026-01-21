#include<stdio.h>

int main(){
    //operator precedence
    // *,/,% have greater precedence than +,- 

    int x = 4+9*3; // 4+(9*3)
    int y = 4%6-3; // (4%6)-3
    printf("%d\n",x);
    printf("%d\n",y);

    //Associativity for same precedence
    //Left to Right

    int a = 4*3/6*2;    // ((4*3)/6)*2
    int b = 5*(2/2)*3;  // bracket solved first 
    int c = 5+2/2*3;    // 5+((2/2)*3)
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);


    return 0;
}