#include<stdio.h>
void main()
{
    int n;
    float amt;
    printf("enter no of units:");
    scanf("%d", &n);
    if(n<=200)
    amt=2.5*n;
    else if(n<=400)
    amt=2.5*200+3.00*(n-200);
    else if(n<=600)
    amt=2.5*200+3.0*200+4.5*(n-400);
    else
    amt=2.5*200+3.0*200+4.5*200+6.0*(n-600);
    printf("AMOUNT TO BE PAID: %f", amt);
}