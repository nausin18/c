#include<stdio.h>
void main()
{
    int i,n;
    float sum=0.0;
    printf("enter the no of terms:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("the summ is:%f", sum);
}
