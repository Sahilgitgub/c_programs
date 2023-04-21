#include<stdio.h>
void main()
{
	int a[10],i,n,temp,j;
	printf("Enter the array: \n");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;	
				}	
		}
	}
	printf("Array in ascending order: \n");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
}
