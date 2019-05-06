#include<stdio.h>
int main()
{
    int i,n,max,secondMax;
    printf("Enter length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elemant of array:");
    for( i=0; i<n; i++ )
    {
        scanf("%d",&arr[i]);
    }
    if( arr[0]>arr[1] )
    {
        max=arr[0];
        secondMax=arr[1];

    }
    else
    {
        max=arr[1];
        secondMax=arr[0];
    }
    for( i=2; i<n; i++ )
    {
        if( max<arr[i] )
        {
            secondMax=max;
            max=arr[i];
        }
        else if( secondMax<arr[i] )
          {secondMax=arr[i];

        }
    }

    printf("max number=%d\n second max number=%d",max,secondMax);

    return 0;
}
