#include<stdio.h>
void main()
{
  int n,m,n1,m1,min=0;
  printf("Enter the number of Rows: ");
  scanf("%d",&n);
  printf("Enter the number of Columns: ");
  scanf("%d",&m);
   if(n%2==0)
       n1=n/2;
   else
       n1=n/2 + 1;
   if(m%2==0)
       m1=m/2;
   else
   {
       m1=m/2 +1;
   }
   printf("The minimum number of packages to be dropped is %d", min=n1*m1);

}

