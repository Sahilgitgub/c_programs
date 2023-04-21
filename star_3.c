#include<stdio.h>
void main()
{
    int i,j,k,a;
    printf("Entrer the number of stars: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=a;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}