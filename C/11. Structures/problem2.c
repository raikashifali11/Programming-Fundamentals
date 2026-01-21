//calculate sum of two vectors having two dimensions x and y
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void calSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1;
    struct vector v2;
    printf("\nEnter x and y components of 1st vector:\n");
    printf("x component ");
    scanf("%d",&v1.x);
    printf("y component ");
    scanf("%d",&v1.y);

    printf("Enter x and y components of 2nd vector:\n");
    printf("x component ");
    scanf("%d",&v2.x);
    printf("y component ");
    scanf("%d",&v2.y);

    struct vector sum = {0};
    calSum(v1,v2,sum);
    return 0;
}
void calSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of two vectors = {%d,%d}\n",sum.x,sum.y);

}