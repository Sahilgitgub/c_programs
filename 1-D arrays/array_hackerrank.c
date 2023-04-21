#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr[10],i,a,sum=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        scanf("%d",&arr[i]);  
        sum+=arr[i];
    }   
    printf("%d",sum);
    return 0;
}