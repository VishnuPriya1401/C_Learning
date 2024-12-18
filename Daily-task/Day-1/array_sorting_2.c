#include<stdio.h>
int main()
{
    int i,j,temp,size;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter array Elements:");
    for(i=0;i<size;i++)
    {
        printf("\nElement %d: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
