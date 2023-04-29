// S=1/2+2/3+3/4+________________+10/11

#include<stdio.h>
void main()

{
    float sum=0,a,i;
    for(i=1;i<=11;i++)
    {
      a=i+1;
      sum=sum+(i/a);
    }
    printf("%f",sum);
}
