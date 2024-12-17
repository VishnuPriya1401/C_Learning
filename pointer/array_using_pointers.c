/*Stroe and display array elements using pointers*/
#include<stdio.h>
int main()
{
    int size, arr[size];
    int *ptr;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&size);

    printf("ENTER %d NUMBERS:",size);
    ptr = arr;

    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }

    for(int i=0;i<size;i++)
    {
        printf("\nNUMBER AT %d : %d",i,*(ptr+i));
    }
}