#include<stdio.h>
main()
{
	int dividend,divisor,rem;
	printf("Enter dividend number:");
	scanf("%d",&dividend);
	printf("Enter divisor number:");
	scanf("%d",&divisor);
	rem=dividend-(dividend/divisor)*divisor;
	printf("Remainder is= %d\n ",rem);
}
