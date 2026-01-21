//function to calculate sum,product and average 
#include<stdio.h>

void doWork(int a, int b, int* sum, int* product, int* average);

int main(){
    int a = 5;
    int b = 5;
    int sum,product,average;

    doWork(a, b, &sum, &product, &average);  // we pass a,b by value and sum,product,average by reference
    printf("sum = %d, product = %d, average = %d",sum,product,average);

    return 0;
}
//pointers se multiple values return krwate
void doWork(int a, int b, int* sum, int* product, int* average){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;

}