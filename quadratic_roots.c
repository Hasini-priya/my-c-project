#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,D,r1,r2,real_part,imag_part;
  printf("enter the values of a,b,c");
  scanf("%f %f %f",&a,&b,&c);
  D=(b*b)-(4*a*c);
  if(D>0)
  {
    printf ("roots are real and distinct ");
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("roor1=%f,root2=%f",r1,r2);
   }
   else if(D=0)
   {
     printf("roots are equal");
     r1=-b/(2*a);
     printf ("root1=%f,root2=%f",r1,r1);
   }     
   else
   {
    printf ("roots are imaginary");
    real_part=-b/(2*a);
    imag_part =sqrt(-D)/(2*a);
    printf ("root1=%f+i%f",real_part, imag_part);
    printf ("root2=%f-%f",real_part, imag_part);
    }  
    return 0;
}