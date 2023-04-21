#include<stdio.h>
void main()
{
    int d[30],i,a,b,c,freq=0;
    printf("Enter no. of elements: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&d[i]);
    }
    //printf("Enter the number find freq: ");
    //scanf("%d",&c);
    for(i=0;i<a;i++)
    if(d[i]==a)
    freq++;
    printf("%d",freq);
    
}