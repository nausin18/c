#include <stdio.h>
void main()
{
    int b,h;
    float area;
    printf("enter height of triangle:");
    scanf("%d", &h);
    printf("enter base of triangle:");
    scanf("%d", &b);
    area=0.5*h*b;
    printf("area of triangle:%f", area);
}