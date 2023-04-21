#include<stdio.h>
void main()
{
    int i,a,temp=0,b,c;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=b%10;
        temp+=c*c*c;
        b=b/10;
    }
    if(temp==b)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("not a armstrng number");
    }
}
// to find length of a numner : l=log10(number)+1