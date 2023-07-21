#include<stdio.h>
void main()
{
    int n,i;
    long int fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("FACTORIAL OF %d is %ld", n,fact);
}