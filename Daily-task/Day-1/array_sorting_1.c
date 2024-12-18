#include<stdio.h>
int main()
{
    int arr[]={90,60,40,10,60};
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    int i,j,size,temp;
    printf("\nEnter array size:");
    scanf("%d",&size);
    int arr2[size];
    printf("\nEnter %d array elements:",size);
    for(i=0;i<size;i++)
    {
        printf("\nEnter array element %d:",i);
        scanf("%d",&arr2[i]);
    } 
    printf("\nEntered array elements are: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }  
    for(i=0;i<size;i++)  
    {
        for(j=i;j<size;j++)
        {
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    printf("\nSorted array elements are: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    } 
}
