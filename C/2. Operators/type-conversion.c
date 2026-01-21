#include<stdio.h>

int main(){
    //int operation int is int
    printf("%d\n",2*2);
    printf("%d\n",2/3);
    
    //float operation float is float
    printf("%f\n",2.0*2.0);
    printf("%f\n",2.0/3);

    //int operation float is float
    printf("%f\n",2.0*2);
    printf("%f\n",4/2.0);
    return 0;
}