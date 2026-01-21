#include<stdio.h>

int main(){
    int num;
    printf("\nSir Ye Calculator sirf 2 numbers input leta ha: \n\n");
    printf("1.Challoo baad me acha bna lena abhi use kr leta hn \n");
    printf("2.Sir acha sa bna lein phir aaye ga \n");
    scanf("%d",&num);
    if(!(num > 0 && num < 3)){
         printf("Sir 1 enter kren ya 2.\n");
         printf("1.Challoo baad me acha bna lena abhi use kr lete hai \n");
         printf("2.Sir acha sa bna lein phir aaye ga \n");
         scanf("%d",&num);   
        }
    if(num == 1){
    int a,b;
    printf("What do you want to calculate?\n");
    printf("1.Sum   2.Product  3.Difference  4.Divide\n");
    int number;
    scanf("%d",&number);
        if(!(number > 0 && number < 5)){
         printf("Agr mera calculator use krna ha tu 1 se 4 me select kren.\n");
         printf("1.Sum   2.Product  3.Difference  4.Divide\n");
         scanf("%d",&number);
        }
        if (number == 1)
        {
            printf("Acha acha aap Sum calculate krna chahte hai\n");
            int a,b;
            printf("Enter first number.\n");
            scanf("%d",&a);
            printf("Enter second number.\n");
            scanf("%d",&b);
            printf("Sir Sum of your two numbers is:\n%d\n",a+b);
            printf("Thank you for using my calculator.");
        }
        if (number == 2)
        {
            printf("Acha acha aap product calculate krna chahte hai\n");
            int a,b;
            printf("Enter first number.\n");
            scanf("%d",&a);
            printf("Enter second number.\n");
            scanf("%d",&b);
            printf("Sir product of your two numbers is:\n%d\n",a*b);
            printf("Thank you for using my calculator.");
        }
         if (number == 3)
        {
            printf("Acha acha aap difference calculate krna chahte hai\n");
            int a,b;
            printf("Enter first number.\n");
            scanf("%d",&a);
            printf("Enter second number.\n");
            scanf("%d",&b);
            printf("Sir difference of your two numbers is:\n%d\n",a-b);
            printf("Thank you for using my calculator.");
        }
        if (number == 4)
        {
            printf("Acha acha aap divide calculate krna chahte hai\n");
            float a,b;
            printf("Enter first number.\n");
            scanf("%f",&a);
            printf("Enter second number.\n");
            scanf("%f",&b);
            printf("Sir Division of your two numbers is:\n%f\n",a/b);
            printf("Thank you for using my calculator.");
        }}
        if (num == 2)
        {
            printf("Sir phir bhi thank you.");
        }
    return 0;
}