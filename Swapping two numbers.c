#include<stdio.h>
main()
{
	float a,b,temp;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping first number=%.1f\n",a);
	printf("After swapping second number=%.1f",b);
}
