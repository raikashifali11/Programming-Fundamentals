#include<stdio.h>

int main(){
    int males,females;
    printf("Enter number of Males: ");
    scanf("%d",&males);
    printf("Enter number of Females: ");
    scanf("%d",&females);

    int total_students = males + females;

    int percentage_of_males = (males*100)/total_students;
    int percentage_of_females = (females*100)/total_students;

    if (percentage_of_males>percentage_of_females)
    {
    printf("----------------------------\n");
    printf("| Perentage of Males: %d   |\n",percentage_of_males);
    printf("| Perentage of Females: %d |\n",percentage_of_females);
    printf("----------------------------\n");
    }
    else{
    printf("\t\t\t\t\t\t\t\t********************************\n");
    printf("\t\t\t\t\t\t\t\t*** Perentage of Females: %d ***\n",percentage_of_females);
    printf("\t\t\t\t\t\t\t\t*** Perentage of Males:   %d ***\n",percentage_of_males);
    printf("\t\t\t\t\t\t\t\t********************************\n");

    }
    return 0;
}