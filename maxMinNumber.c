#include<stdio.h>

int main()
{
    int min,max,i,n;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element");
    for( i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for( i=1; i<n; i++ )
    {
        if( min > arr[i] )
        {
            min=arr[i];
        }

        if( max < arr[i] )
        {
            max=arr[i];
        }


    }
    printf(" minimum number %d \n maximum number %d",min,max);



    return 0;
}
