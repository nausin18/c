#include<stdio.h>
void main()
{
    int qbread,qbutter;
    float total;
    printf("enter the quantity of bread:");
    scanf("%d", &qbread);
    printf("enter the quantity of butter:");
    scanf("%d", &qbutter);
    total=20*qbread + 80*qbutter;
    if(total>199)
    {
        total=total-0.1*total;
        printf("Total amount=%f", total);
    }
}
