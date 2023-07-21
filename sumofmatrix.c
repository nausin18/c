#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("enter the dimensions of the matrix");
    scanf("%d%d",&m,&n);
    printf("enter the elements of 1st matrix:");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d", &a[i][j]);
    printf("enter the elements of 2nd matrix:");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d", &b[i][j]);
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         c[i][j]=a[i][j] + b[i][j];
    printf("\n RESULTANT MATRIX IS: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}