#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int list[10];
    int n = 10;
    for (int i = 0; i < 10; i++)
        list[i] = rand()%90+10;
    int newList[10];
    for (int i = 0; i < 10; i++)
        newList[i] = list[i];
    printf("List: ");
    for (int i = 0; i < 10; i++)
        printf("%d ",newList[i]);
    printf("\n");
    // bubble sort
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (newList[j]>newList[j+1])
            {
                int temp = newList[j];
                newList[j] = newList[j+1];
                newList[j+1] = temp;
        for (int k = 0; k < 10; k++)
            {
                printf("%d ",newList[k]);
            }
        printf("\n");      
            }
            
        }
    }
    printf("Sorted List: ");
    for (int i = 0; i < 10; i++)
        printf("%d ",newList[i]);
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d is at position %d\n",newList[i],i);

    return 0;
}