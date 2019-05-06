#include<stdio.h>
int main()
{
    int n,p,x=1;
    long binary=0;
    printf("Enter decimal number:");
    scanf("%d",&n);
    while( n!=0 )
    {
        p=n%2;
        n=n/2;
        binary=binary+p*x;
        x=x*10;
    }
    printf("binary Number=%ld",binary);


    return 0;
}
