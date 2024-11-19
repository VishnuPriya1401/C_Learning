#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value for a:");
    scanf("%d",&a);
    printf("Enter value for b:");
    scanf("%d",&b);
    printf("\nValues before swapping: a-%d , b-%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues before swapping: a-%d , b-%d",a,b);
}