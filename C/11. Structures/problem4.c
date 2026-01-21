// Make a structure to store bank account information of customers
#include<stdio.h>

typedef struct BankAccount
{
    char name[100];
    int AccountNo;
    int AccountCode;

} acc;


int main(){
    int n;
    acc person1 = {"mohid",501,420};
    acc person2 = {"kashif",502,786};
    acc person3 = {"umar",503,280};
    printf("person1 bankaccount information is %s,%d,%d\n",person1.name,person1.AccountNo,person1.AccountCode);
    printf("person2 bankaccount information is %s,%d,%d\n",person2.name,person2.AccountNo,person2.AccountCode);
    printf("person3 bankaccount information is %s,%d,%d\n",person3.name,person3.AccountNo,person3.AccountCode);
    
    


    return 0;
}