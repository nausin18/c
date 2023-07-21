#include<stdio.h>
long int fact(int);
void main()
{
    int n;
    long int f;
    printf("enter a number:");
    scanf("%d",&n);
    f=fact(n);
    printf("FACTORIAL=%ld", f);

}
long int fact(int p)
{
    long int m=1;
    int i;
    for(i=p;i>0;i--)
    m=m*i;
    return m;
}