#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n;
    int i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Print the array
    printf("The array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);

    return 0;
}