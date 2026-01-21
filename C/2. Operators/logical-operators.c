#include<stdio.h>

int main(){
    // AND (&&) operator

    printf("%d\n",3>4 && 7 ==7 );
    printf("%d\n",4 == 4 && 3<=3);

    // OR (||) operator

    printf("%d\n",4<3 || 5>=2);
    printf("%d\n",4>4 || 3 != 3);

    // NOT (!) operator

    printf("%d\n",!(2>3));
    printf("%d\n",!(4 == 4));
    return 0;
}