#include<stdio.h>

void checkchar(char str[],char c);

int main(){
    char str[] = "HelloWorld";
    char c = 'e';
    checkchar(str,c);
    
    return 0;
}

void checkchar(char str[],char c){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            printf("character is present");
            return;
        }      
    }
    printf("character is not present");
}