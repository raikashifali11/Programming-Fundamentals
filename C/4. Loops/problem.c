//Find that weight of melon enter by user is equally divided to two persons or not
#include<stdio.h>

int main(){
    int weight;
    printf("Enter weight : ");
    scanf("%d",&weight);

    if(weight <= 0){
       printf("Please enter weight greater than 0.");

    }
    else{
        if ( weight % 2 == 0 ){
           printf("It can be equally divided. ");
        }
        else{
           printf("It cannot be equally divided. ");
        }
    }


    return 0;
}