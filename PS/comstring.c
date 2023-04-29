#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] , s2[20];
    int i,len,len2,c=0;
    printf("enter the string 1:");
    scanf("%s",&s1);
    printf("enter the string 2:");
    scanf("%s",&s2);
    len=strlen(s1);
    len2=strlen(s2);
    if(len!=len2)
    {
        printf("string are diffrent");
    }
    else
    {
        for(i=0;i<=len;i++)
        {
            if(s1[i]!=s2[i])
            {
                printf("string is not equal");
                break;
            }
            else
            {
                c++;
            }
            if(c==len)
            {
                printf("string is equal");
            }
        }
    }
}
