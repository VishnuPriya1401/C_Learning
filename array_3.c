/* insert a value to a sorted array and display the final sorted list*/

#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr1[size], arr2[size+1],num,index;

    for (int i=0;i<size;i++)
    {
        printf("\nEnter value for - %d:",i);
        scanf("%d",&arr1[i]);
    }
    for (int i=0;i<size;i++)
    {
        printf("\nValue at - %d:%d",i,arr1[i]);
    }

    printf("\nEnter the number to be inserted:");
    scanf("%d",&num);

    for (int i=0;i<size;i++)
    {
        if(arr1[i]<num)
            continue;
        else
            index = i;
            break;
    } 

    for(int i=0; i<size+1;i++)
    {
        if(i<index)
        {
            arr2[i]=arr1[i];
        }
        else if(i == index)
        {
            arr2[i]=num;
        }
        else
        {
            arr2[i]=arr1[i-1];
        }
    }
    for (int i=0;i<size+1;i++)
    {
        printf("\nValue at - %d:%d",i,arr2[i]);
    }   
}