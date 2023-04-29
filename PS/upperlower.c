#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char s[20];
    printf("enter word:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
    }
    printf("word:%s",s);
}

