#include <stdio.h>
void main()
{
    float r,area,circumference;
    printf("enter the radius of circle:");
    scanf("%f", &r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area of circle:%f", area);
    printf("circumference of circle:%f", circumference);
}