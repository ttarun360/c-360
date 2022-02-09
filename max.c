#include<stdio.h>
void max();
void main()
{
	max();
}
void max()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a is max");
	}
	else if(b>a)
	{
		printf("b is max");
	}
	else
	{
		printf("both are equal");
	}
}
