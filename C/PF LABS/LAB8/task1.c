#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int quarterMinSales[4];
int quarterMaxSales[4];
float quarterAverages[4];
int minSales = 100,maxSales = 0;
float minAverage = 100.0,maxAverage = 0.0;
int idx1,idx2, idx3, idx4;

void quarterSales(int arr[],int a,int n);
void quarterWiseCheck(int quarterMinSales[],int quarterMaxSales[],float quarterAverages[]);
int main(){
    srand(time(NULL));
    int monthlySales[12];
    for (int i = 0; i < 12; i++)
        monthlySales[i] = rand()%90+10;
        printf("Monthly Sales: ");
    for (int i = 0; i < 12; i++)
        printf("%d ",monthlySales[i]);
    printf("\n");
    quarterSales(monthlySales,1,0);
    quarterSales(monthlySales,2,3);
    quarterSales(monthlySales,3,6);
    quarterSales(monthlySales,4,9);
    quarterWiseCheck(quarterMinSales,quarterMaxSales,quarterAverages);
    printf("Quarter %d has minimum sale %d\n",idx1,minSales);
    printf("Quarter %d has maximum sale %d\n",idx2,maxSales);
    printf("Quarter %d has minimum average sale %.2f\n",idx3,minAverage);
    printf("Quarter %d has maximum average sale %.2f\n",idx4,maxAverage);
    
    return 0;
}
void quarterSales(int arr[],int a,int n){
    int m = n+3;
    printf("Quarter %d: ",a);
    for (int i = n; i < m; i++)
        printf("%d ",arr[i]);
    int min = 99, max = 10, total = 0;
    for (int i = n; i < m; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
        total = total + arr[i];
    }
    float average = (float)total/3;
    printf(" Min: %d Max: %d Average: %.2f\n",min,max,average);
    quarterMinSales[a-1] = min;
    quarterMaxSales[a-1] = max;
    quarterAverages[a-1] = average;
}
void quarterWiseCheck(int quarterMinSales[],int quarterMaxSales[],float quarterAverages[]){
    for (int i = 0; i < 4; i++)
    {
        if (minSales>quarterMinSales[i]){
            minSales = quarterMinSales[i];
            idx1 = i+1;
        }
        if (maxSales<quarterMaxSales[i]){
            maxSales = quarterMaxSales[i];
            idx2 = i+1;
        }
        if (minAverage>quarterAverages[i]){
            minAverage = quarterAverages[i];
            idx3 = i+1;
        }
        if (maxAverage<quarterAverages[i]){
            maxAverage = quarterAverages[i];
            idx4 = i+1;
        }
    } 
}