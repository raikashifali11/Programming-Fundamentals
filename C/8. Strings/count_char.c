#include<stdio.h>

int countchar(char str[],char c){
    char* ptr = str;
    int count = 0;
    while (*ptr!='\0')
    {
        if (*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
    
}

int main(){
    char name[] = "rai kashif ali";
    int count = countchar(name,'a');
    printf("Count is %d",count);


    return 0;
}