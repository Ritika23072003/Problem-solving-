#include <stdio.h>
#define SIZE 3
int main()
{
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];

    int r,c,s;
    printf("Enter elements in matrix of size 3x3: \n");
    for(r=0;r<SIZE;r++)
    {
        for(c=0;c<SIZE;c++)
        {
            scanf("%d", &A[r][c]);
        }
    }
    for(r=0;r<SIZE;r++)
    {
        for(c=0;c<SIZE;c++)
        {
            B[r][c]=A[c][r];
        }
    }
    s=1;
    for(r=0;r<SIZE && s;r++)
    {
        for(c=0;c<SIZE;c++)
        {
            if(A[r][c]!= B[r][c])
            {
                s=0;
                break;
            }
        }
    }
    if(s==1)e
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(r=0;r<SIZE;r++)
        {
            for(c=0;c<SIZE;c++)
            {
                printf("%d ", A[r][c]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}
