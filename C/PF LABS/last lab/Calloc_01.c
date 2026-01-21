#include <stdio.h>
#include <stdlib.h>

int main() {
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);

    char **stringArray = (char **)calloc(numStrings, sizeof(char *));
    if (stringArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < numStrings; i++) {
        stringArray[i] = (char *)calloc(100, sizeof(char)); 
        if (stringArray[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("Enter string %d: ", i + 1);
        scanf(" %[^\n]", stringArray[i]);
    }

    // Print the strings
    printf("You entered:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", stringArray[i]);
    }
    for (int i = 0; i < numStrings; i++) {
        free(stringArray[i]);
    }
    free(stringArray);

    return 0;
}