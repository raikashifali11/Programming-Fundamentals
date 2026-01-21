// Declare a list of 20 elements to store the ages of 20 individuals. Initialize the ages at 
// random in the range 1-100. The goal is to categorize individuals into different age groups (child, 
// adult, senior). Perform the following tasks:
// -Initialize ages and print them in a single line.
// -Print the ages in a single line.
// -Count the number of children (ages 1-12).
// -Count the number of adults (ages 13-64).
// -Count the number of seniors (ages 65 and above).
// -Print the ages of children in a single line.
// -Print the ages of adults in a single line.
// -Print the ages of seniors in a single line.
// Sample Run:
// Ages: 18 40 3 16 18 46 83 42 46 73 4 56 7 91 95 8 70 4 24 18 
// Ages of children: 3 4 7 8 4 
// Ages of adults: 18 40 16 18 46 42 46 56 24 18 
// Ages of seniors: 83 73 91 95 70
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int ages[20];
    for (int i = 0; i < 20; i++)
        ages[i] = rand()%100+1;
    printf("Ages: ");
    for (int i = 0; i < 20; i++)
        printf("%d ",ages[i]);
    
    int x = 0, y = 0, z = 0;
    int children[20], adults[20], seniors[20];
    int countChildren = 0, countAdults = 0, countSeniors = 0;
    for (int i = 0; i < 20; i++)
    {
        if (ages[i] <= 12)
        {
            children[x] = ages[i];
            countChildren++;
            x++;
        }
        else if (ages[i] > 12 && ages[i] < 65)
        {
            adults[y] = ages[i];
            countAdults++;
            y++;
        }
        else{
            seniors[z] = ages[i];
            countSeniors++;
            z++;
        }
    }
    printf("\nAges of children: ");
    for (int i = 0; i < countChildren; i++)
        printf("%d ",children[i]);
    printf("\nAges of adults: ");
    for (int i = 0; i < countAdults; i++)
        printf("%d ",adults[i]);
    printf("\nAges of seniors: ");
    for (int i = 0; i < countSeniors; i++)
        printf("%d ",seniors[i]);
    
    return 0;
}
