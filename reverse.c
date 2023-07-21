#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("ENTER A NUMBER:");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("REQUIRED REVERSE: %d", rev);
}