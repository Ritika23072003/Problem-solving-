#include<stdio.h>
void main()
{
    int n,sum1=0,sum2=0;
    printf("enter the no.of digits:");
    scanf("%d",&n);
    int num[n];
    printf("enter the no. digitwise\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    int mid=(n/2)+1;
    int i=1,j=mid+1;
    for(int k=1;k<=mid-1;k++){
        sum1=sum1+num[i];
         sum2=sum2+num[j];
         i++;
         j++;
    }
   if(sum1==sum2){
      printf("balanced\n");
    }
  else{
      printf("unbalanced\n");
      }
}
