#include<stdio.h>
void main()
{
	int a[4],b,c[4],d[4];
	printf("Enter 4 number for a array: ");
	for(b=0;b<=3;b++)
	{
		scanf("%d",&a[b]);
	}
	printf("Enter 4 number for b array: ");
	for(b=0;b<=3;b++)
	{
		scanf("%d",&c[b]);
	}
	for(b=0;b<=3;b++)
	{
		d[b]=a[b]+c[b];
	}
	printf("\nSum of array are: ");
	printf("\na\t\tc\t\t d");
	for(b=0;b<=3;b++)
	{
		printf("\n%d + %d = %d",a[b],c[b],d[b]);
	}
}
