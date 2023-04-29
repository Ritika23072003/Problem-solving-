#include<stdio.h>
void main()
{
int i,j;
    for(i=1;i<=4;i++)
      {
          for(j=i;j<=4-1;j++)
          {
              printf(" ");
          }
          for(j=i;j>=1;j--)
          {
              printf("%d",j);
          }
          for(j=2;j<=i;j++)
          {
              printf("%d",j);
          }
          printf("\n");
      }
      return 0;
}

