#include<stdio.h>

void Assalam_o_Alaikum();
void Welcome();

int main(){
    char c;
    printf("Enter m for Muslim and n for Non-Muslim:\n");
    scanf("%c",&c);

    if (c == 'm')
    {
        Assalam_o_Alaikum();
    }
    else{
        Welcome();
    }
    
    
    return 0;
}

void Assalam_o_Alaikum(){
    printf("Assalam-o-Alaikum");
}
void Welcome(){
    printf("Welcome");
}