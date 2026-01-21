#include<stdio.h>

int countString(char arr[]);

int main(){
    char name[100];
    printf("Enter something: ");
    fgets(name, 100, stdin);
    printf("length is %d",countString(name));
    
    return 0;
}

int countString(char arr[]){
    int count = 0;
    for (int i = 1; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}