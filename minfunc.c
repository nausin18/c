#include<stdio.h>
int findmin(int a[],int n);
void main()
{
    int num[100],p,i,min;
    printf("enter the size of the array:");
    scanf("%d",&p);
    printf("enter %d numbers:", p);
    for(i=0;i<p;i++)
    scanf("%d", &num[i]);
    min=findmin(num,p);
    printf("\n MINIMUM is:%d", min);

}
int findmin(int a[100],int n)
{
    int m,i;
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<m)
        m=a[i];

    }
    return m;
}