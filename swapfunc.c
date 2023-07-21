#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("ENTER TWO NUMBERS TO SWAP:");
    scanf("%d%d", &a,&b);
    printf("Before swapping:a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\n After swapping:a=%d,b=%d", a,b);
}
void swap(int*p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}