//  Declare two lists, list1 and list2, each containing 15 elements with random integer 
// values. Your goal is to perform various operations on these lists:
// -Print both lists in a single line.
// -Calculate the sum of elements in each list.
// -Find and print the maximum value in each list.
// -Create a new list, common, containing the elements that are common between both lists.
// -Print the elements of common in a single line.
// Sample Run:
// List1: 21 65 42 23 31 42 22 4 34 36 86 59 12 36 8 
// List2: 27 44 23 52 66 93 60 11 40 18 34 54 79 55 89 
// Sum of elements in List1: 521
// Sum of elements in List2: 745
// Maximum value in List1: 86
// Maximum value in List2: 93
// Common elements: 23 34
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int list1[15], list2[15];
    for (int i = 0; i < 15; i++){
        list1[i] = rand()%100+1;
        list2[i] = rand()%100+1;
    }
    int sum1 = 0, sum2 = 0;
    printf("List1: ");
    for (int i = 0; i < 15; i++){
        printf("%d ",list1[i]);
        sum1 += list1[i];
    }
    printf("\nList2: ");
    for (int i = 0; i < 15; i++){
        printf("%d ",list2[i]);
        sum2 += list2[i];
    }
    printf("\nSum of elements in List1: %d",sum1);
    printf("\nSum of elements in List2: %d\n",sum2);
    int maximum1 = 0, maximum2 = 0;
    for (int i = 0; i < 15; i++)
    {
        if (list1[i]>maximum1)
            maximum1 = list1[i];
    }
    for (int i = 0; i < 15; i++)
    {
        if (list2[i]>maximum2)
            maximum2 = list2[i];
    }
    printf("Maximum value in List1: %d\n",maximum1);
    printf("Maximum value in List2: %d\n",maximum2);
    printf("Common elements: ");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            if (list1[i] == list2[j])
                printf("%d ",list1[i]);
        }  
    }
       
    return 0;
}