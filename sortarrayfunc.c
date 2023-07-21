#include<stdio.h>
int*sortarray(int arr[20],int n);
void main()
{
    int a[20],n,i;
    int*5;
    printf("ENTER SIZE OF THE ARRAY:");
    scanf("%d", &n);
    printf("ENTER %d ELEMENTS:",n);
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    s=sortarray(a,n);
    printf("\n AFTER SORTING:");
    for(i=0;i<n;i++)
    printf("%d", *s+i);

}
int*sortarray(int arr[20];int n)
{
    int arr[n],a[20],i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        return arr;
    }
}