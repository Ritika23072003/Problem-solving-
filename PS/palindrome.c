#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"ritika"};
    int l=0;
    int h=strlen(str)-1;
    while(h>1)
    {
        if(str[l++]!=str[h--])
        {
            printf("%s is not palindrom\n",str);
            return 0;
        }
    }
    printf("%s is palindrom",str);
    return 0;
}
