#include<stdio.h>
void main()
{
    int n,i,a[20],j,t;
    printf("enter the no. of inputs:");
    scanf("%d", &n);
    printf("Enter the inputs:");
    for(i=0;i<n;i++)
    {
      scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d", a[i]);
      }
      
}