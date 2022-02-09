// 1!+2!+3!+.....n!

#include<stdio.h>
int main()
{
	int n,i,fact,j,sum=0;
	printf("Enter the last limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+fact;
	}
	printf("Factorial Sum = %d",sum);
	return 0;
}
