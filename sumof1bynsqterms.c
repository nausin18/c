#include<stdio.h>
void main()
{
    float sum=0.0;
    int i,n;
    printf("enter no of terms:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+=1.0/(i*i);
    }
    printf("\n SUM=%f", sum);
}
