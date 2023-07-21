#include<stdio.h>
void main()
{
    int num[10],i,max=0;
    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++)
    scanf("%d", &num[i]);
    for(i=0;i<10;i++)
    if(num[i]>max)
    {
    max=num[i];
    }
    printf("REQ. MAXIMUM:%d", max);
}