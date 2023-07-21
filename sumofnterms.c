#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    sum+=i;
    printf("SUM of first %d terms is:%d",n,sum);
}