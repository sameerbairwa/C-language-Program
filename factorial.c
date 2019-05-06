#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    sum=factorial(a)+factorial(b);
    printf("%d",sum);



    return 0;
}


int factorial( int x )
{
    if( x==0)
    {
        return 1;
    }
    else{
        return x*factorial( x-1 );
    }
}
