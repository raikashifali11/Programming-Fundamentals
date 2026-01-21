//pointer can be incremented or decremented by 1 (datatype)
#include<stdio.h>

int main(){
    int age = 22;
    int* ptr = &age;
    printf("Address at ptr = %u\n",ptr);    // %u means unsigned int

    ptr++;  // ptr = ptr + 1                // ptr incremented by integer size (4 bytes)
    printf("Address at ptr = %u\n",ptr);
    ptr--;  // ptr = ptr - 1                // ptr decremented by integer size (4 bytes) 
    printf("Address at ptr = %u\n",ptr);
    return 0;
}