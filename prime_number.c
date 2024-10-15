#include<stdio.h>

int main()
{ 
  int n,i,c=0;
  printf ("enter a non negative integer");
  scanf("%d",&n);
  if(n==0||n==1)
  {
    printf("%d is not prime",n);
  }
  else
  {
    for(i=1;i<=n;i++)
    if(n%i==0)
    {
     c++;
    }
  }
     if(c==2)
       printf ("\n%d is prime",n);
     else
      printf ("\n%d is not a prime",n);
   
        return 0;
}