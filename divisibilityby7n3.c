#include<stdio.h>
void main()
{
    int num;
    printf("enter a number to check:");
    scanf("%d", &num);
    if(num%7==0 && num%3==0)
    printf("THE NUMBER IS DIVISIBLE BY BOTH 7 AND 3 ");
    else
    printf("THE NUMBER IS NOT DIVISIBLE BY BOTH 7 AND 3");
}