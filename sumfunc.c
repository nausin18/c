#include<stdio.h>
void sum(float,float);
void main()
{
    float a,b;
    printf("ENTER TWO NUMBERS:");
    scanf("%f%f", &a,&b);
    sum(a,b);
}
void sum(float p,float q)
{
    float s;
    s=p+q;
    printf("\n REQUIRED SUM=%f", s);
    
}