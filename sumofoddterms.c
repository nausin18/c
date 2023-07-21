#include<stdio.h>
void main(){
    int i,n,sum=0;
    printf("enter no. of terms:");
    scanf("%d", &n);
    for(i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("SUM=%d", sum);
}
