
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i,j,s,e,l;
    l=2*n-1;
    s=0;
    e=l-1;
    int a[l][l];
    while(n!=0)
    {
        for(i=s;i<=e;i++)
        {
            for(j=s;j<=e;j++)
            {
                if(i==s||i==e||j==s||j==e)
                {
                    a[i][j]=n;
                }
            }
        }
        s++;
        e--;
        n--;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}



