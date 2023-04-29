#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,count=0;
    printf("enter paragraph:");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '&&s[i+1]!=' ')
            count++;
    }
    printf("words are:%d\n",count+1);
}
