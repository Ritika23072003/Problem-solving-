//WAP to implement the transpose of 2D array
#include<stdio.h>
void transpose();
int main(){
    int a[10][10],r,c,i,j;
    printf("RITIKA  \n2100320130140\n");
    printf("Enter the value of r,c : ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of Matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    transpose(a,r,c);
    return 0;
}
void transpose(int x[10][10],int r,int c)
{
    int y[r][c],i,j;
    printf("transpose is :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            y[i][j]=x[j][i];
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}

