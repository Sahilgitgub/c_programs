#include<stdio.h>
void main()
{
	int a[2][2],b,c,d[2][2],e[2][2],f;
	printf("Enter any 4 number for metrix: \n");
	for(b=0;b<=1;b++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[b][c]);
		}
		printf("\t\n");
	}
	printf("Enter number for d  metrix: \n");
	for(b=0;b<=1;b++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&d[b][c]);
		}
		printf("\t\n");
	}
	for(b=0;b<=1;b++)
	{
		for(c=0;c<=1;c++)
		{
			e[b][c]=0;
			for(f=0;f<=1;f++)
			{
				e[b][c]=e[b][c]+a[b][f]*d[f][c];
			}
		}
	}
	printf("Addition of metrix are: \n");
	for(b=0;b<=1;b++)
	{
		for(c=0;c<=1;c++)
		{
			printf("%d\t",e[b][c]);
		}
		printf("\n");
	}
}
