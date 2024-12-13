#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter ten numbers to add into the array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array values are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
}