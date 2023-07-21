/*
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("i=%d,j=%d\n",i,j);
        }
    }
}
*/

/*
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%d ", j);
        }
        printf("\n");
    }
    
}
*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
