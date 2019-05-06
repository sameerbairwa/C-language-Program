#include<stdio.h>
int main()
{
    int n,p,binary=0,x=1;
    printf("Enter decimal number:");
    scanf("%d",&n);
    while( n!=0 )
    {
        p=n%2;
        n=n/2;
        binary=binary+p*x;
        x=x*10;
    }
    printf("binary Number=%d",binary);


    return 0;
}
