/*Add two numbers using pointers*/
#include<stdio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    printf("ENTER TWO NUMBER:");
    scanf("%d %d", &num1, &num2);
    ptr1= &num1;
    ptr2= &num2;
    sum = *ptr1 + *ptr2;
    printf("\nADDRESS OF NUMNER 1: %p", ptr1);
    printf("\nADDRESS OF NUMNER 2: %p", ptr2);
    printf("\nADDRESS OF NUMNER 1: %d", *ptr1);
    printf("\nADDRESS OF NUMNER 2: %d", *ptr2);
    printf("\nTHE SUM OF TWO NUMEBRS IS: %d", sum);
}