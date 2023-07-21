#include <stdio.h>
void main()
{
    float p,t,r,si;
    printf("enter principle:");
    scanf("%f", &p);
    printf("enter time in years:");
    scanf("%f", &t);
    printf("enter rate:");
    scanf("%f", &r);
    si=p*r*t*0.01;
    printf("simple interest:%f", si);
}