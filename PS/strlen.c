#include<stdio.h>
#include<string.h>
int str_len(char str[])
{
 int i,l=0;
 for(i=0;str[i]!='\0';i++)
 {
        l=l+1;
 }
 return l;
}
int main()
{
    int k;
   char str[]="Today";
   k=str_len(str);
   printf("%d",k);
}
