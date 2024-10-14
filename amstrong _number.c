#include<stdio.h>
#include<math.h>
 main()
{
    int num,i,sum=0,temp,n,r;
    printf ("enter a number ");
    scanf("%d",&num);
    printf ("\nno of digits in the number");
    scanf("%d",&n);
       temp=num;
    for(;num>0;num=num/10)
    {
      r=num%10;
      sum=sum+pow(r,n);
    }
      if(temp==sum)
      {
      printf ("%d is amstrong number",temp);
      }
      else
      {
      printf ("%d is not a amstrong number",temp);
      }
    return 0;
}