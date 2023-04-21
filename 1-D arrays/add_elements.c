#include<stdio.h>
void main()
{
    int arr[5],i,sum=0,a;
    printf("Enter no. of elements to add: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("Enter elements to add[%d]: \a",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of arr is: %d\n\a",sum);
}