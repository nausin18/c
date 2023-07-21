#include<stdio.h>
void main()
{
    int a,b,op;
    printf("enter two operands:");
    scanf("%d%d",&a,&b);
    printf("enter your choice no:\n 1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
        printf("SUM=%d", a+b);
        break;
        case 2:
        printf("SUBTRACTION=%d", a-b);
        break;
        case 3:
        printf("PRODUCT=%d", a*b);
        break;
        case 4:
        printf("DIVISION:%d", a/b);
        break;
        default:
        printf("INCORRECT OPERATOR");
        break;
    }

}