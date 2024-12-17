#include<stdio.h>
int main()
{
    float F, C, fah, cel;
    int temp;
    printf("\nTYPE 1 IF TEMPERATURE IS IN FAHRENHEIT");
    printf("\nTYPE 2 IF TEMPERATURE IS IN CELCIUS");
    
    printf("\nENTER YOUR TEMPERATURE FORMAT:");
    scanf("%d",&temp);
    
    switch(temp)
    {
        case 1: printf("\nENTER YOUR TEMPERATURE IN FAHRENHEIT:");
                scanf("%f",&F);
                C=((F-32)*(0.5556));
                printf("\nTEMPERATURE IN CELCIUS IS: %f",C);
                break;
        case 2: printf("\nENTER YOUR TEMPERATURE IN CELCIUS:");
                scanf("%f",&cel);
                fah=(cel*(1.8))+32;
                printf("\nTEMPERATURE IN FAHRENHEIT IS: %f",fah);
                break;
        default:printf("\nWrong Choice");
                break;
    }
}