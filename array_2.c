/* read valuesin an array and display in the reverse order */
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter five numbers to add into the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array values in reverse are:\n");
    for(int i=5;i>0;i--)
    {
        printf("%d-%d,",arr[i-1],i-1);
    }
}