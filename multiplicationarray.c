#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],m1,n1,m2,n2,i,j,k;
    printf("ENTER DIMENSIONS OF 1st MATRIX:");
    scanf("%d%d", &m1,&n1);
    printf("ENTER DIMENSIONS OF 2nd MATRIX:");
    scanf("%d%d", &m2,&n2);
    if(n1==m2)
    {
        printf("enter the elements of the 1st matrix:");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the elements of the 2nd matrix: ");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                c[i][j]=0;
                for(k=0;k<n1;k++)
                   c[i][j]=c[i][j]+a[i][k]*b[k][j];
                  
            }

        }
        printf("THE RESULTANT MATRIX IS:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }

    }
    
}