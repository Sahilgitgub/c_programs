#include<stdio.h>
void main()
{
	int a[2][2],i,j;
	printf("Enter the 4 elements of a array: \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Value of metrix is: \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
	    {
		    printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
}
