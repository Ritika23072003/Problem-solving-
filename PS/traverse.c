
#include<stdio.h>
void main()
{
    int i,a[30],n;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the element in array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("traverse array:\n");
    for(i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }

}
