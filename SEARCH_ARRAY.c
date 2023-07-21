#include<stdio.h>
void main()
{
    int a[10],i,item;
    printf("enter 10 items\n");
    for(i=0;i<10;i++)
    scanf("%d", &a[i]);
    printf("enter a number to search:");
    scanf("%d", &item);
    for(i=0;i<10;i++)
    if(item==a[i])
    {
        printf("element found at position %d!", i);
        break;
    }
    if(i==10)
    printf("ITEM NOT FOUND");

