#include<stdio.h>
void main()
{
    int a,b,c,d,e,greatest,sec_greatest;
    printf("enter five numbers:");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e)
    {
    greatest=a;
    }
    else if(b>c && c>d && d>e)
    {
    greatest=b;
    }
    else if(c>d && c>e)
    {
        greatest=c;
    }
    else if(d>e)
    {
        greatest=d;
    }
    else
    {
        greatest=e;
    }
    if(a!=greatest)
    {
        sec_greatest=a;
    }
    else if(b!=greatest)
    {
        sec_greatest=b;
    }
    else if(c!=greatest)
    {
        sec_greatest=c;
    }
    else if(d!=greatest)
    {
        sec_greatest=d;
    }
    else
    {
        sec_greatest=e;
    }
    if(a!=greatest)
    {
        if(a>sec_greatest)
        sec_greatest=a;
    }
    else if(b!=greatest)
    {
        if(b>sec_greatest)
        sec_greatest=b;
    }
    else if(c!=greatest)
    {
        if(c>sec_greatest)
        sec_greatest=c;
    }
    else if(d!=greatest)
    {
        if(d>sec_greatest)
        sec_greatest=d;
    }
    else
    {
        if(e>sec_greatest)
        sec_greatest=e;
    }

printf("the greatest number is %d\n", greatest);
printf("the second greatest number is %d\n", sec_greatest);
}