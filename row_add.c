#include<stdio.h>
void main()
{
	int a[5][5],i,n,j,sr=0,sc=0;
	printf("Enter the value for the metrix: ");
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			sr=sr+a[i][j];
			sc=sc+a[i][j];
		}
	}
		printf("sr=%d,sc=%d",sr,sc);
} 