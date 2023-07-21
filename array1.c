/*
#include<stdio.h>
void main()
{
    int num[10],n,i;
    printf("enter the total no of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    printf("%d ", num[i]);
}
*/

#include<stdio.h>
void main()
{
    int num[10],n,i;
    printf("enter total no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d", &num[i]);
    for(i=0;i<n;i++)
    printf("%d ", num[i]);
}