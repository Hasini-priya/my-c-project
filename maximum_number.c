#include<stdio.h>
int main()
{
int a,b,c,d,max;
printf("enter the values of a,b,c,d");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
{
   if(a>c)
   {
     if(a>d)
     max=a;
     else
     max=d;
   }
   else
   {
     if(c>d)
     max=c;
     else
     max=d;
   }
}
else
{
    if(b>c)
    {
       if(b>d)
       max=b;
       else
       max=d;
    }
    else
    {
       if(c>d)
       max=c;
       else
       max=d;
    }
}
   printf ("max=%d",max);

    return 0;
}