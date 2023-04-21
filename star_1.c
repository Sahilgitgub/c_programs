#include<stdio.h>
void main()
{
    int i,a,j;
    printf("Enter the number of stars: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}