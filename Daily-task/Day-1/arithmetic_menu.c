#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    float a=0.0,b=0.0;
    printf("\nArithmetic Menu");
    printf("\n---------------");
    printf("\n1. Addition \n2. Subraction \n3. Multiplication \n4.Division \5.Squareroot");
    printf("\nChoose Option: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("\nEnter two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("\n The sum of two numbers is: %f",a+b);
        break;
    
    case 2:
        printf("\nEnter two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("\n The difference of two numbers is: %f",a-b);
        break;

    case 3:
        printf("\nEnter two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("\n The product of two numbers is: %f",a*b);
        break;

    case 4:
        printf("\nEnter two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("\n The quotient is: %f",a/b);
        break;

    case 5:
        printf("\nEnter a Numbers: ");
        scanf("%f",&a);
        printf("\n The square root of the numbers is: %f",sqrt(a));
        break;
    
    default:
        printf("\nWrong choice!!");
        break;
    }
}
