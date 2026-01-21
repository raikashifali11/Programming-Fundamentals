#include<stdio.h>

int main(){
    int centigrade = 37;
    int fahrenheit = centigrade*9/5+32;
    printf("Centrigrade: %d\n",centigrade);
    printf("Fahrenheit: %d\n",fahrenheit);

    int side1 = 5;
    int side2 = 8;
    int side3 = 3;
    int side4 = 4;
    int side5 = 6;
    int perimeter = side1 + side2 + side3 + side4 + side5;
    printf("Side 1: %d\n",side1);
    printf("Side 2: %d\n",side2);
    printf("Side 3: %d\n",side3);
    printf("Side 4: %d\n",side4);
    printf("Side 5: %d\n",side5);
    printf("Perimeter: %d\n",perimeter);

    int x1 = 2;
    int x2 = 3;
    int answer1 = (x1*x1) + (x2*x2) + (2*x1*x2);
    int answer2 = (x1*x1) + (1/(x2*x2)) - 2;
    int answer3 = (x1+x2)*(x1-x2);
    printf("x1*x1 + x2*x2 + 2*x1*x2 : %d\n",answer1);
    printf("x1*x1 + 1/(x2*x2) - 2 : %d\n",answer2);
    printf("(x1+x2)*(x1-x2) : %d\n",answer3);

    int Wheat = 150;
    int Rice = 285;
    int Biscuit = 320;
    int total = Wheat+Rice+Biscuit;
    printf("Wheat\t%d\n",Wheat);
    printf("Rice\t%d\n",Wheat);
    printf("Biscuit\t%d\n",Biscuit);
    printf("------------\n");
    printf("Total\t%d\n",total);

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
    printf("Units are %d\n",units);
    printf("Sales Tax is %d\n",taxunits);
    printf("Total bill is %d\n",totalbill); 


    return 0;
}