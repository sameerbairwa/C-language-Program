#include<stdio.h>
int digitCount( int );
int sumDigit( int, int );
int multiple( int , int );
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count = digitCount( n );
    int ans=sumDigit( n, count);
    printf("%d\n",ans);
    if( ans==n)
    {
        printf(" This is armstrong number");
    }
    else
    {
        printf("This is not armstrong number");
    }

    return 0;
}

int digitCount( int n)
{
    int count=0;
    while( n!=0)
    {
        int digit=n%10;
        n=n/10;
        count++;

    }
    printf("%d\n",count);
    return count;
}

int sumDigit( int val, int a)
{
    int sum = 0;
    while( val!=0)
    {

        int digit=val%10;
        int multiply=multiple( digit, a );
        sum+=multiply;
        val=val/10;
    }
    return sum;

}

int multiple( int p, int b)
{
    int x=1;
    for( int i=0; i<b; i++ )
    {
        x=x*p;
    }
    return x;
}
