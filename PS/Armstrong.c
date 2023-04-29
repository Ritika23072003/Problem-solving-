#include<stdio.h>
void main()
{
    int n,a,b,sum,i,last,prod,count=0;
    printf("enter the no.:");
    scanf("%d",&n);
    b=a=n;  //save the no. because n is going to be zero
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    while(a!=0)
    {
        last=a%10;
        a=a/10;
        prod=1;
        for(i=1;i<=count;i++)
            prod=prod+last;
        sum=sum+prod;
    }
    if(sum=b)
        printf("%d is armstrong",b);
    else
        printf("%d is not armstrong",b);
}
