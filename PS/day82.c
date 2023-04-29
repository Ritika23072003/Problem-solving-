#include<stdio.h>
#include<math.h>
void kdigit(int);
 void main()
{
               int a,b;
               printf("enter two numbers:");
               scanf("%d%d",&a,&b);
               kdigit(pow(a,b));
}
void kdigit(int n)
{
               int k,r;
               printf("enter kth value:");
               scanf("%d",&k);
               while(n>0 && k != 0)
               {
                              r=n%10;
                              n=n/10;
                              k--;
               }

               if((n<=0 && k != 0))
                              printf(" kth digit is not there");
               else
                              printf(" kth digit is %d",r);

}
