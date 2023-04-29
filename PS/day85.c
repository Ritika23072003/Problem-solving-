#include<stdio.h>
#include<math.h>
void main()
{
  int i,n;
  printf("enter the no.:");
  scanf("%d",&n);
  while(n%2==0)
  {
      printf("%d",2);
      n=n/2;
  }
  for(i=2;i<=sqrt(n);i++)
  {
    while(n%i==0)
    printf("%d",i);
    n=n/i;
  }
  if(n>2)
  {
      printf("%d",n);
  }
}
