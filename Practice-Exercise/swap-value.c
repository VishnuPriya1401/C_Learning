#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter value for x:");
    scanf("%d",&x);
    printf("Enter value for y:");
    scanf("%d",&y);
    printf("\nValues before swapping: x-%d, y-%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\nValues after swapping: x-%d, y-%d",x,y);
}