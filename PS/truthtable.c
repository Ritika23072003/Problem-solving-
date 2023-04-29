#include<stdio.h>
void main(){
    int n;
    printf("\n\t 1.AND\n\t 2.0R\n\t 3.NOT\n\t 4.NOR\n\t 5.NAND\n\t 6.EXIT\n\tENTER HERE :");
    scanf("%d",&n);
    while(n==1||n==2||n==3||n==4||n==5){
    switch(n)
        {
            case 1:
            {   printf("\n\tA  B  A.B");
                for(int i=0;i<4;i++){
                int temp=i;
                int a=i%2;
                temp/=2;
                int b=temp%2;
                printf("\n\t%d  %d  %d",b,a,a&&b);}
                break; }
            case 2:
            {   printf("\n\tA  B  A+B");
                for(int i=0;i<4;i++){
                int temp=i;
                int a=i%2;
                temp/=2;
                int b=temp%2;
                printf("\n\t%d  %d  %d",b,a,a||b);}
                break; }
            case 3:
            {   printf("\n\tA  !A");
                for(int i=0;i<2;i++){
                printf("\n\t%d  %d",i,!i);}
                break; }
            case 4:
            {   printf("\n\tA  B  !(A+B)");
                for(int i=0;i<4;i++){
                int temp=i;
                int a=i%2;
                temp/=2;
                int b=temp%2;
                printf("\n\t%d  %d   %d",b,a,!(a||b));}
                break; }
            case 5:
            printf("\n\tA  B  !(A.B)");
            {   for(int i=0;i<4;i++){
                int temp=i;
                int a=i%2;
                temp/=2;
                int b=temp%2;
                printf("\n\t%d  %d   %d",b,a,!(a&&b));}
                break; }
            default:
            { printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5)"); }
        }
        printf("\n\t 1.AND\n\t 2.0R\n\t 3.NOT\n\t 4.NOR\n\t 5.NAND\n\t 6.EXIT\n\tENTER HERE :");
        scanf("%d",&n);
    }
}
