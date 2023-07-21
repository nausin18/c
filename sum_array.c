#include<stdio.h>
void main()
{
    int num[10],n,i,sum=0;
    printf("enter no of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d", &num[i]);
    for(i=0;i<n;i++)
    sum=sum+num[i];
    printf("SUM OF ALL ELEMENTS:%d",sum);
}