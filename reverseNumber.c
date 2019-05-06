#include<stdio.h>
int main()
{
    int i,n,x=1,temp,sum=0;

    printf("Enter number of digit:\n");
    scanf("%d",&n);
    int arr[n];
    printf(" Enter digit:");
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=n-1; i>=n/2; i--)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for( i=0; i<n; i++)
    {
        sum+=arr[i]*x;
        x=x*10;
    }
    printf("%d",sum);




    return 0;
}
