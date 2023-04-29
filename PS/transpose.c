//WAP to implement the transpose of a 2D array
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);
    int arr[10][10];
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nAfter transpose the elements are...\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    printf("\nRITIKA  2100320130140");
    return 0;

}
