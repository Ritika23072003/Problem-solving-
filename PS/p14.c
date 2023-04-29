#include<stdio.h>
void main()
{
    char s[10];
    scanf("%s",s);
    int l=strlen(s);
    int i,j,k;
    for(i=0;i<l;i++)
    {
        for(j=i;j<l;j++)
        {
         printf("%c",s[j]);
        }
        printf("\n");
        for(k=0;k<i+1;k++)
        {
            if(i+1<l)
                printf(".");
        }
    }


}
