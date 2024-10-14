#include<stdio.h>
int main()
{
    int num,sum,temp,i;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(temp==sum)
    {
        printf("%d is a perfect number",temp);
    }
    else
    {
        printf("%d is not a perfect number",temp);
    }
}
