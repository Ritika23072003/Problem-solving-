#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,r1,r2,d;
  printf("enter the value of a,b and c:");
  scanf("%f %f %f",&a,&b,&c);
  d=(b*b-4*a*c);
  if(d>0)
  {
      r1=-b+sqrt(d)/(2*a);
      r2=-b+sqrt(d)/(2*a);
      printf("the real root=%f %f",r1,r2);
  }
  else if(d==0)
  {
      r1=-b/(2*a);
      r2=-b/(2*a);
      printf("root are equal=%f %f",r1,r2);
  }
  else
  {
      printf("root are imaginary");
  }
}
