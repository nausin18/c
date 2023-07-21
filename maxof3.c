/*
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is MAXIMUM NUMBER", a);
        else
        printf("%d is MAXIMUM NUMBER", c);

    }
    else
    {
        if(b>c)
        printf("%d is MAXIMUM NUMBER.", b);
        else
        printf("%d is MAXIMUM NUMBER.", c);
    }
}
*/
#include<stdio.h>
void main()
{
    int a,b,c,greatest;
    printf("enter three numbers:\n");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        if(a>c)
        greatest=a;
        else
        greatest=c;
    }
    else{
        if(b>c)
        greatest=b;
        else
        greatest=c;
    }
    printf("THE GREATEST NUMBER IS %d",greatest);
}