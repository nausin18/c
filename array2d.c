
#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n;
    printf("ENTER THE DIMENSIONS OF MATRIX:");
    scanf("%d%d", &m,&n);
    printf("ENTER THE ELEMENTS OF THE MATRIX:");
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        scanf("%d ", &a[i][j]);
    printf("\n THE MATRIX IS:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", &a[i][j]);
        }
        printf("\n");
    }
}