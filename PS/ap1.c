//1+2+3+4+____________________+99//

#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the no. :");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("the sum is : %d",sum);
}
