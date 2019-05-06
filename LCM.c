#include<stdio.h>
int main()
{
    int a,b,temp,c;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);



    if( a>b)
    {
        temp=b;
        b=a;
        a=temp;

    }


    }
    int lcm=c*(a/c)*(b/c);
    printf(" LCM=%d",lcm);
    return 0;
}
