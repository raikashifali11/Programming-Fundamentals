#include<stdio.h>

int swappointer(int* a , int* b);

int main(){
   int a=5;
   int b=10;
   printf("Before swap function\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);

   swappointer(&a,&b);
   printf("After swap function\n");
    printf("a is %d\n",a);
    printf("b is %d\n",b);

    
    return 0;
}


int swappointer(int* a, int* b){
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;


}