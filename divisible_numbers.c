#include<stdio.h>

int main()
{
    int i,x,y,a,b;
    printf("enter the values of x,y");
    scanf("%d %d",&x,&y);
    printf ("\n enter the values of a,b");
    scanf("%d %d",&a,&b);
    for(i=x;i<=y;i++)
    {
      if(i%a==0&&i%b==0)
       {
       printf ("\n the numbers divisible by %d and %d between %d and %d are%d",a,b,x,y,i);
       }
    }  
        return 0;
}