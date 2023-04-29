#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter triangle side :");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("equilateral\n");
    else if(a==b||b==c||c==a)
        printf("isosceles\n");
    else
        printf("scale\n");

}
