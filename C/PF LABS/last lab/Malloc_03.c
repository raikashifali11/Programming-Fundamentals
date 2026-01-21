#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char original[100];
    char* copy;
    int length;

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    length = strlen(original);

    copy = (char *)malloc((length + 1) * sizeof(char));

    if (copy == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Copy the original string
    strcpy(copy, original);
    printf("Copied string: %s\n", copy);
    free(copy);

    return 0;
}