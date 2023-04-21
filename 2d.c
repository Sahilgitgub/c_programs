#include<stdio.h>
void main()
{
    int a[10][10],b,c,i,j;
    printf("Enter the number: ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        for(j=1;j<i;j++)
        {
            scanf("%d",&a[i][j])
        }
        printf("\n");
    }
}