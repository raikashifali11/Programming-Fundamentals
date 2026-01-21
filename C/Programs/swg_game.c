#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char comp){
    // ss
    // ww
    // gg
    if (you==comp)
    {
        return 0;
    }
    // ws or sw
    // gw or wg
    // gs or sg
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
}

int main(){
    char you, comp;
    // for computer
    srand(time(NULL));
    int num = rand()%100+1;
    if (num <= 33)
    {
        comp = 's';
    }  
    else if (num >=34 &&  num <= 66)
    {
        comp = 'w';
    } 
    else 
    {
        comp = 'g';
    }
    // for you
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you, comp);

    if (result==0)
    {
        printf("You chose %c and computer chose %c.Game draw!",you,comp);
    }
    else if (result==1)
    {
        printf("You chose %c and computer chose %c.You win!",you,comp);
    }
    else if (result==-1)
    {
        printf("You chose %c and computer chose %c.You lose!",you,comp);
    } 
    return 0;
}