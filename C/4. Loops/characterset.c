#include<stdio.h>

int main(){
    char c = '!';

    printf("%d= %c\n",c,c);
    for (int i = 1; i < 255 ; i++)
    {
         printf("%d= %c\n",c+i,c+i);

    }
    
    return 0;
}