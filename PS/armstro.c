#include<stdio.h>
void main()
{
    int n,a,b,sum,i,last,prod,count=0;
    printf("enter the no.:");
    scanf("%d",&n);
    a=n;   // saving the no.
    sum=0;
    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum=sum+(last*last*last);
    }
    if(sum==a)
        printf("%d is armstrong",a);
    else
        printf("%d is not armstrong",a);
}
