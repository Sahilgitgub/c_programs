#include<stdio.h>
void main()
{
	int a[3][3],i,j,k,b[3][3],sum=0,c[i][j];
	printf("Enter the value for first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the value for second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[j][k];
			}
			c[i][j]=sum;
		}
	}
	printf("Multiplication of matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
}
