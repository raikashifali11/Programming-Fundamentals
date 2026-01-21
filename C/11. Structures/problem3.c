// print complex numbers using arrow operators
#include<stdio.h>

struct complex
{
    int real;
    int img;
};

 
int main(){
    struct complex number1 = {5,12};
    struct complex* ptr = &number1;
    printf("real part = %d\n",ptr->real);
    printf("imaginary part = %d\n",ptr->img);
    
    return 0;
}