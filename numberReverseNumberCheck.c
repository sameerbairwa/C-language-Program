#include<stdio.h>
// int digit(int);
int reverse(int);
int main()
{

    int x;

    printf("Enter number:\n");
    scanf("%d",&x);
    int rev=reverse(x);
    printf("reverse number=%d\n",rev);
    if( rev==x )
    {
       printf("YES");
    }
    else{
    printf(" NO ");
    }



    return 0;
}

  int reverse(int n)
  {
    int sum=0,digit;
    while( n!=0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;

    }
    return sum;
  }
