#include<stdio.h>
void main()
{
	int a[20],max,min,i,n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in an array: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[1];
	for(i=1;i<=n;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	printf("\nMinimum of array is: %d",min);
	printf("\nMaximum of array is: %d",max);
}
