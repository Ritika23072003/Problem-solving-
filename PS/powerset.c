#include <stdio.h>
#include <math.h>
int main()
{  int n,i,a[50],j,temp;
printf("Enter number of element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{ printf("Enter the %d element: ",i+1);
  scanf("%d",&a[i]);
}
printf("\nSet:\n");
    for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);
}
printf("\nPower Set:\n");
printf("{ ");
for(i=0;i<pow(2,n);i++)
{
    temp=i;
    printf("{");
    for(j=0;j<n;j++)
    {
        if(temp%2==1)
        {
            printf(" %d ",a[j]);
        }
        temp=temp/2;
    }
    printf("},");
}
printf(" }");
return 0;
}
