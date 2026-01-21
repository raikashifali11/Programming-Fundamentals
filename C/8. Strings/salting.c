// salting means add some salt (string) from yourself to the user enter string
#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    printf("enter password: ");
    scanf("%s",&password);
    printf("new password: ");
    salting(password);

    return 0;
}

void salting(char password[]){
    char salt[] = "Rai01";
    char newPassword[100];
    strcpy(newPassword,password);  // password enter by user is copied in new password 
    strcat(newPassword,salt);      // new password is concatenated with salt
    puts(newPassword);

}