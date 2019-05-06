#include<stdio.h>
int main()
{
    int i,n,oddSum=0;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elemant of array ");
    for( i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);

    }
    for( i=0; i<n; i++ )
    {
        if( arr[i]%2!=0)
        {
            oddSum+=arr[i];
        }


    }
    printf("odd Sum=%d",oddSum);

    return 0;
}
