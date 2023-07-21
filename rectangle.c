#include <stdio.h>
void main()
{
    int l,b,p,a;
    printf("Enter length of rectangle:");
    scanf("%d", &l);
    printf("enter breadth of rectangle:");
    scanf("%d", &b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter of rectangle is:%d", p);
    printf("Area of rectangle is:%d", a);

}