#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    char s[20]="geeks",*j;
    j=s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        printf("%s\n",j);
        *(j+i)='.';
    }
}
