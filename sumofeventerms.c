#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the no of terms:");
    scanf("%d", &n);
    for(i=2;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("SUM IS %d", sum);
}