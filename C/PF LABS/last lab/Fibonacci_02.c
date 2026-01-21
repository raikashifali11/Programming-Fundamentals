#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, result;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    result = fibonacci(n);

    // Print the result
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}