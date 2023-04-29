#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20], s2[20];
    int l1,l2,i,c;
    printf("enter the string:");
    scanf("%s",&s1);
    printf("enter the string:");
    scanf("%s",&s2);
    l1=strlen(s1);
    l2=strlen(s2);
    c=l1;
    for(i=0;i<=l2;i++)
    {
      s1[l1]=s2[i];
      l1++;
    }
     s1[l2+c]='\0';
     printf(s1);

}
