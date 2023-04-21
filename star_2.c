#include<stdio.h>
void main()
{
    int i,j,a;
    printf("Enter the numbers of stars: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=a;j>=i;j--)
        {
            printf("*");
        }
    printf("\n");
    }
}