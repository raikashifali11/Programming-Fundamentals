#include<stdio.h>

int countvowels(char str[]);

int main(){
    char str[] = "rai kashif ali";
    int count = countvowels(str);
    printf("vowels are %d",count);
    
    return 0;
}
int countvowels(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
        {
            count++;
        }
        
    }
    return count;
    
}