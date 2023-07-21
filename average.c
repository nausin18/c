#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,m6;
    float avg;
    printf("enter marks of six subjects:");
    scanf("%d%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5,&m6);
    avg=(m1+m2+m3+m4+m5+m6)/6;
    printf("average of six subjects=%f", avg);
}