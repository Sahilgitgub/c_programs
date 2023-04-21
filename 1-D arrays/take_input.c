#include<stdio.h>
void main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the elements for array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("the array elements are : \n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}