#include<stdio.h>

int main(){
    int units;
    int bill;
    int tax;
    printf("Enter units ");
    scanf("%d",&units);
    if (units>=1 && units<=100)
    {
        bill = units*20;    
    }
    else if (units>100 && units<=200)
    {
        bill = (100*20) + (units-100)*30;
        
    }
    else if (units>200)
    {
        bill = (100*20) + (100*30) + (units-200)*40; 
    }

    int aftersalestax = bill + (0.1*bill);
    int taxunits = (0.1*bill);
    int totalbill = aftersalestax + 500;
    
    printf("Sales Tax is %d\n",taxunits);
    printf("Total bill is %d\n",totalbill); 

    return 0;
}