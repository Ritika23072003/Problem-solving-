#include<stdio.h>
#define N 5
int main()
{
    int n[N],mean,median,i,j,sum=0;
    printf("enter 5 value:");
    for(i=0;i<=N;i++)
    {
    scanf("%d",&n[i]);
    }
    for(i=0;i<=N;i++)
    {
        sum=sum+n[i];
    }
    mean=sum/N;
    printf("mean %d \n",mean);
    int temp;
    for(i=0;i<=N;i++)
        for(j=i+1;j<=N;j++)
        {
          if(n[i]>n[j])
          {
           temp=n[i];
           n[i]=n[j];
           n[j]=temp;
          }
        }
        for(i=0;i<=N;i++)
        {
            printf("%d",n[i]);
        }
        if(N%2==0)
        {
            printf("\n median=%d",n[N/2-1],n[N/2]);
        }
        else
        {
            printf("\n median=%d",n[N/2-1]);
        }
        return 0;
}
