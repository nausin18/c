#include<stdio.h>
int isPrime(int);
void main()
{
    int n,a;
    printf("ENTER A NUMBER:");
    scanf("%d", &n);
    a=isPrime(n);
    if(a==0)
    printf("\n NOT PRIME");
    else
    printf("\n PRIME");
}
int isPrime(int num)
{
    int i;
    for(i<2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}