#include<stdio.h>

int main(){
    int basic_salary;
    printf("Basic salary = ");
    scanf("%d",&basic_salary);

    int medical_allowance = 0.10*basic_salary;
    int conveyance_allowance = 0.15*basic_salary;
    int house_rent = 0.45*basic_salary;
    int gross_salary = basic_salary + medical_allowance + conveyance_allowance + house_rent;
    printf("Gross salary = %d\n",gross_salary);
    int tax = 0.10*gross_salary;
    int net_salary = gross_salary - tax;
    printf("Net salary = %d\n",net_salary);

    return 0;
}