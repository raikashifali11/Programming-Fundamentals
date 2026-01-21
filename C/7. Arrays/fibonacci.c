#include<stdio.h>

int main(){
    int n;
    printf("Enter n (n>2): ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    printf("%d\t",fibo[0]);
    printf("%d\t",fibo[1]);

    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        printf("%d\t",fibo[i]);
    }
    
    return 0;
}