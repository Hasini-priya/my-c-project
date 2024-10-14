#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    for(;num>0;)
    {

    r=num%10;
    sum=sum*10+r;
    num=num/10;
    }
    if(temp==sum)
    {
        printf("%d is a palindrome number",temp);
    }
    else
    {
        printf("%d is not a palindrome number",temp);
    }
}
