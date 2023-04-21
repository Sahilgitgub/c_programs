#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the year: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    if(i%4==0 && i%100 !=0 || i%400==0)
    {
        printf("leap year:%d",i);
    }
    }
    return 0;
}