#include<stdio.h>
int main()
{
    float units,total_bill;
    printf("enter no of units");
    scanf("%f",&units);
    if(units<=50)
    {
        total_bill=units*0.50;
    }
    else if(units>50&&units<=150)
    {
        total_bill=25+(units-50)*0.75;
     }
    else if(units>100&&units<=250)
    {
        total_bill=100+(units-150)*1.2;
    }
    else if(units>250)
    {
        total_bill=220+(units-250)*1.5;
    }
    printf("total_bill is%f",total_bill);
}
