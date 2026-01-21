#include <stdio.h>
#include <stdlib.h>

int main() {
    int **array;
    int rows, cols;
    int i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for rows
    array = (int*)malloc(rows * sizeof(int));
    
    // Allocate memory for columns
    for (i = 0; i < rows; i++) {
        array = (int*)malloc(cols * sizeof(int));
    }

    // Input array elements
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Print array elements
    printf("Array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}