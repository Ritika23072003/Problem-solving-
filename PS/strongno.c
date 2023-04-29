#include<stdio.h>
void main()
{
    int sum,a,i,n,prod,last;
    printf("enter the no.");
    scanf("%d",&n);
    a=n;
    sum=0;
    while(n>0)
    {
        last=n%10;
        n=n/10;
        prod=1;
        for(i=1;i<=last;i++)
            prod=prod*i;
        sum=sum+prod;
    }
    if(sum==a)
          printf("%d is strong no.",a);
    else
          printf("%d is not strong no.",a);

}
