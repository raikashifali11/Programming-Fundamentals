#include<stdio.h>

int main(){
    int amount_deposited;
    printf("Amount Deposited = ");
    scanf("%d",&amount_deposited);
    double interest = 0.10;
    int after1year = interest*amount_deposited + amount_deposited;
    int after2year = interest*after1year + after1year;
    int after3year = interest*after2year + after2year;
    printf("Amount after one year = %d\n",after1year); 
    printf("Amount after second year = %d\n",after2year); 
    printf("Amount after third year = %d\n",after3year); 

    return 0;
}