#include<stdio.h>
void main()
{
    int c;
    printf(" enter choice:");
    scanf("%d",&c);

    switch(c)
    {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("Wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        case 0: printf("Sunday");
                break;
        default: printf("invalid choice");
    }
}
