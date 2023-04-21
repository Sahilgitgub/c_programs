#include<stdio.h>
void main()
{
	int d,i,fact=1;
	printf("Enter the value: ");
	scanf("%d",&i);
	while(i>0)
	{
		fact=fact*i;
		i--;
	}
	printf("%d%d",d,fact);
}
