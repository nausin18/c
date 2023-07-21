#include<stdio.h>
void main()
{
    int a,b,c,n;
    printf("enter the no. of terms:");
    scanf("%d",&n);
    a=0,b=1;
    printf("%d ",b);
    do
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }while(n>1);
}