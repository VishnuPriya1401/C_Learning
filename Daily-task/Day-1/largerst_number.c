/*Conditional statement method*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER THREE NUMBERS:");
    scanf("%d %d %d",&a,&b,&c);
    int big=((a>b)&&(a>c))?a:((b>a)&&(b>c))?b:c;
    printf("LARGEST NUMBER IS %d",big);
}