#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,j,l;
    printf("enter the string:");
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
        for(j=1;j<=i;j++)
    {
          printf("%c",s[j-1]);
    }
    printf("\n");
    }

}
