// we will make substitute of gets input function
#include<stdio.h>

int main(){
    char name[100];
    char c;
    int i=0;
    printf("Enter name: ");
    while (c != '\n')
    {
        scanf("%c",&c);
        name[i] = c;
        i++;
    }
    
    name[i] = '\0';
    printf("Name is: ");
    puts(name);

    return 0;
}