// Write a program to declare an array of ten elements. Initialize them randomly in any
// range. Print even and odd elements in separate rows. Count both elements. If there are more 
// even elements, make all elements even by adding one or if there are more odd elements, make 
// all elements odd by subtracting one. At the end print all elements in a single line.
// Sample Run:
// List: 99 28 61 98 75 53 76 92 2 60
// List after processing: 99 27 61 97 75 53 75 91 1 59
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int list[10];
    for (int i = 0; i < 10; i++)
        list[i] = rand()%100+1;
    for (int i = 0; i < 10; i++)
        printf("%d ",list[i]);
    printf("\n");
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (list[i]%2 == 0)
            countEven++;
        else
            countOdd++;  
    }
    printf("Even: %d     Odd: %d\n",countEven,countOdd);
    for (int i = 0; i < 10; i++)
    {
        if (countEven > countOdd)
        {
            if (list[i]%2 != 0)
                list[i] += 1;  
        }
        else{
            if (list[i]%2 == 0)
                list[i] -= 1;
        }  
    }
    printf("List after processing: ");
    for (int i = 0; i < 10; i++)
        printf("%d ",list[i]);

    return 0;
}