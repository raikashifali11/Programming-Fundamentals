#include<stdio.h>

int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("%c is a uppercase character.",c);
    }
    
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase character.",c);
    }
    
    else if (c >= '0' && c <= '9')
    {
        printf("%c is a digit.",c);
    }
    else{
        printf("%c is a special character.",c);
    }
    


    return 0;
}