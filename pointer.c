#include<stdio.h>
void main()
{
    int a[5]={4,8,7,6,12},i;
    int *ptr;
    ptr=a;
    for(i=0;i<5;i++)
    printf("%d", *ptr + i);
}