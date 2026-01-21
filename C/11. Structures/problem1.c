// take address(house no, block, city, state) of five people from user and output on screen
#include<stdio.h>

typedef struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
    
} add;
void printAdd(add people);

int main(){
    add people[5];
    printf("\nEnter address of 1st people:\n");
    printf("house number ");
    scanf("%d",&people[0].houseNo);
    printf("block number ");
    scanf("%d",&people[0].block);
    printf("city name ");
    scanf("%s",people[0].city);
    printf("state name ");
    scanf("%s",people[0].state);
    
    printf("\nEnter address of 2nd people:\n");
    printf("house number ");
    scanf("%d",&people[1].houseNo);
    printf("block number ");
    scanf("%d",&people[1].block);
    printf("city name ");
    scanf("%s",people[1].city);
    printf("state name ");
    scanf("%s",people[1].state);
    
    printf("\nEnter address of 3rd people:\n");
    printf("house number ");
    scanf("%d",&people[2].houseNo);
    printf("block number ");
    scanf("%d",&people[2].block);
    printf("city name ");
    scanf("%s",people[2].city);
    printf("state name ");
    scanf("%s",people[2].state);
    
    printf("\nEnter address of 4th people:\n");
    printf("house number ");
    scanf("%d",&people[3].houseNo);
    printf("block number ");
    scanf("%d",&people[3].block);
    printf("city name ");
    scanf("%s",people[3].city);
    printf("state name ");
    scanf("%s",people[3].state);
    
    printf("\nEnter address of 5th people:\n");
    printf("house number ");
    scanf("%d",&people[4].houseNo);
    printf("block number ");
    scanf("%d",&people[4].block);
    printf("city name ");
    scanf("%s",people[4].city);
    printf("state name ");
    scanf("%s",people[4].state);

    printAdd(people[0]);
    printAdd(people[1]);
    printAdd(people[2]);
    printAdd(people[3]);
    printAdd(people[4]);
    
    
    return 0;
}
void printAdd(add people){
    printf("Address is: %d, %d, %s, %s.\n",people.houseNo,people.block,people.city,people.state);
}