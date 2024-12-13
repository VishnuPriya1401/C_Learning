/* to check the given number is positive or negative*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d is a positive number",a);
    }
    else
       printf("%d is a negative number",a);
}
