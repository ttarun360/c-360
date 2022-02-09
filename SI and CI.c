#include<stdio.h>
#include<math.h>
main()
{
	int principle,rate,years;
	float simple_interest,compound_interest;
	printf("Enter the priciple: ");
	scanf("%d",&principle);
	printf("Enter the rate: ");
	scanf("%d",&rate);
	printf("Enter the time in yrs: ");
	scanf("%d",&years);
	simple_interest=(principle*rate*years)/100;
	printf("SimpleInterest= %f \n",simple_interest);
	compound_interest=principle*pow((1+rate/100),years);
	printf("CompoundInterest=%f",compound_interest);
}
