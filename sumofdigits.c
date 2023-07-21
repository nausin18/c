#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("ENTER A NUMBER:");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("SUM of digits is %d",sum);
}