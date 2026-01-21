#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,discriminant,root1,root2;
        printf("A: ");
        scanf("%d",&a);
    while (a == 0)
    {
        printf("Enter non-zero value\n");
        printf("A: ");
        scanf("%d",&a);
    }
    printf("B: ");
    scanf("%d",&b);
    printf("C: ");
    scanf("%d",&c);
    discriminant = b*b - 4*a*c;
    if (discriminant < 0)
    {
        printf("Roots are imaginary");
    }
    else{
        root1 = (-b-sqrt(discriminant))/(2*a);
        root2 = (-b+sqrt(discriminant))/(2*a);
        printf("Root 1: %d\n",root1);
        printf("Root 2: %d\n",root2);
    }
    
    return 0;
}