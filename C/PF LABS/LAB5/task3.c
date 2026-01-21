#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Think some number(1-6) on dice: ");
    scanf("%d",&num1);
    printf("Think some number(1-6) on dice: ");
    scanf("%d",&num2);
    printf("Think some number(1-6) on dice: ");
    scanf("%d",&num3);
    
    if (num1 == 1 && num2 == 1 && num3 == 1){
        printf("One appear three times\n");
        return 0;
    }
    else if ((num1 == 1 && num2 == 1) || (num1 == 1 && num3 == 1) || (num2 == 1 && num3 == 1))
        printf("One appear two times\n");
    else if (num1 == 1 || num2 == 1 || num3 == 1)
        printf("One appear one time\n");

    if (num1 == 2 && num2 == 2 && num3 == 2){
        printf("Two appear three times\n");
        return 0;
    }
    else if ((num1 == 2 && num2 == 2) || (num1 == 2 && num3 == 2) || (num2 == 2 && num3 == 2))
        printf("Two appear two times\n");
    else if (num1 == 2 || num2 == 2 || num3 == 2)
        printf("Two appear one time\n");

    if (num1 == 3 && num2 == 3 && num3 == 3){
        printf("Three appear three times\n");
        return 0;
    }
    else if ((num1 == 3 && num2 == 3) || (num1 == 3 && num3 == 3) || (num2 == 3 && num3 == 3))
        printf("Three appear two times\n");    
    else if (num1 == 3 || num2 == 3 || num3 == 3)
        printf("Three appear one time\n");

    if (num1 == 4 && num2 == 4 && num3 == 4){
        printf("Four appear three times\n");
        return 0;
    }
    else if ((num1 == 4 && num2 == 4) || (num1 == 4 && num3 == 4) || (num2 == 4 && num3 == 4))
        printf("Four appear two times\n");    
    else if (num1 == 4 || num2 == 4 || num3 == 4)
        printf("Four appear one time\n");

    if (num1 == 5 && num2 == 5 && num3 == 5){
        printf("Five appear three times\n");
        return 0;
    }
    else if ((num1 == 5 && num2 == 5) || (num1 == 5 && num3 == 5) || (num2 == 5 && num3 == 5))
        printf("Five appear two times\n");
    else if (num1 == 5 || num2 == 5 || num3 == 5)
        printf("Five appear one time\n");

    if (num1 == 6 && num2 == 6 && num3 == 6){
        printf("Six appear three times\n");
        return 0;
    }
    else if ((num1 == 6 && num2 == 6) || (num1 == 6 && num3 == 6) || (num2 == 6 && num3 == 6))
        printf("Six appear two times\n");
    else if (num1 == 6 || num2 == 6 || num3 == 6)
        printf("Six appear one time\n");
    
    return 0;
    }