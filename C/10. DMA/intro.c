#include<stdio.h>
#include<stdlib.h>

int main(){
    float* ptr;
    //memory allocation
    // ptr = (float*) malloc(5*sizeof(float));  // memory is allocated in run time not compile time
    ptr = (float*) calloc(5,sizeof(float));   // it will initialize memory with 0
    //input
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 5;
    ptr[3] = 3;
    ptr[4] = 9;
    //output
    for (int i = 0; i < 5; i++)
    {
        printf("%f\n",ptr[i]);
    } 
    free(ptr);
    return 0;
}