//to find sum of n terms//
/*
#include<stdio.h>
void main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("sum=%d",sum);
}
*/

// to find factorial //

/*
#include<stdio.h>
void main()
{
    int i,n;
    long int fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of %d is %ld", n,fact);
}
*/

// to find sum of digits //

/*
#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("enter a number:");
    scanf("%d", &n);
    while(n>0)
    {
    rem=n%10;
    sum+=rem;
    n=n/10;
    }
    printf("sum of digits:%d", sum);
}
*/

// to find reverse //

#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    printf("reverse of number is:%d",rev);
}