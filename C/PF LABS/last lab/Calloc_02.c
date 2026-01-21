#include <stdio.h>
#include <stdlib.h>

int main() {
    float *floatArray;
    int n, i;

    printf("Enter the number of floats: ");
    scanf("%d", &n);

    floatArray = (float *)calloc(n, sizeof(float));
    if (floatArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d floats:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &floatArray[i]);
    }
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%f\n", floatArray[i]);
    }
    free(floatArray);

    return 0;
}