
#include<stdio.h>
void main()
{
    int i,j,k,m=1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }
    for(k=1;k<=i-1;k++)
    {
        printf("**");
        printf("*");
    }
    m++;
    printf("\n");
}

}
