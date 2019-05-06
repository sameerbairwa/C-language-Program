#include<stdio.h>
int main()
{
    int i=0,n,maxNumber;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element");
    for( i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int max( int [],int );

    maxNumber=max( arr, n );
    printf("%d",maxNumber);


    return 0;
}

int max( int a[],int n )
{
    int i,max;
    for( i=0; i<n; i++ )
    {
        if( max<a[i])
        {
            max=a[i];
        }
    }

    return max;
}
