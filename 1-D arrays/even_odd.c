#include<stdio.h>
#define size 10
int main()
{
    int arr[size],i,even=0,odd=0;
    for(i=0;i<size;i++)
    {
        printf("Enter the value for arr[%d]: ",i);
        scanf("%d",&arr[i]);
    if(arr[i]%2==0)
        even++;
    else
        odd++;
    }
    printf("no. of even elements is: %d\n",even);
    printf("no. of odd elements is: %d",odd);
    return 0;
}