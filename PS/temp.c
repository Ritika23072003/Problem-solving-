#include<stdio.h>
void main()
{
 float t;
 printf("enter temperature :");
 scanf("%f",&t);
 if (t<0){
    printf("freezing weather");}
 else if(t<=10){
    printf("very cold");}
 else if(t<=20){
    printf("cold");}
 else if(t<=30){
    printf("normal temp");}
 else if(t<=40){
    printf("hot temp");}
 else{

    printf("very hot");
}
}

