#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int *dp = (int *)malloc((n + 1) * sizeof(int));
    if (dp == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = i * dp[i - 1];
    }
    int result = dp[n];
    free(dp);

    return result;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = factorial(num);

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}