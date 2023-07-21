#include<stdio.h>
void main()
{
    int i,n;
    printf("ENTER no of terms:");
    scanf("%d", &n);
    for(i=1;i<=n;i+=2)
    if(i%3==0 && i%5==0)
    printf("%d ",i);
}