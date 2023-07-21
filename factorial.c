/*
#include<stdio.h>
void main()
{
    int n,i;
    long fact=1;
    printf("enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial of %d is:%ld", n,fact);
}
*/
#include<stdio.h>
void main()
{
    int n,i;
    long int fact=1;
    printf("enter a no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("FACTORIAL of %d is %ld",n,fact);
    
}