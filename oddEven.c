#include<stdio.h>
int oddEven(int );
int main()
{
	int x;
	int num;
	printf("Enter an integer number:");
        scanf("%d"&x);

	num=oddEven(x);
	if( num==1)
	{printf("\nThis is an Even number");}
	else
	{printf("This is  an odd number");}



    return 0;
}

int oddEven(int *a)
{
	if(a%2==0)
        {return 1;}
	else
        {return 0;}

}
