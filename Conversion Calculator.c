#include <stdio.h>
main()
{
	char c;
	float t,a,km,m,temp,f,me,cm,vo,b;
	printf("Enter the conversion type: ");
	scanf("%c",&c);
	if (c=='t')
	{
		printf("Enter the time in hrs: ");
		scanf("%f",&t);
		a=t*60;
		printf("The time in min: ");
		printf("%.2f",a);
	}
	else if (c=='d')
	{
		printf("Enter the dist in kms: ");
		scanf("%f",&km);
		m=km*1000;
		printf("Dist in mtr: ");
		printf("%.2f",m);
	}
	else if (c=='k')
	{
		printf("Enter the temp in celcius: ");
		scanf("%f",&temp);
		f=((9/5)*c)+32;
		printf("Temp in farehneit: ");
		printf("%.2f",f);
	}
	else if (c=='a')
	{
		printf("Enter the area in mtr square: ");
		scanf("%f",&me);
		cm=me*100*100;
		printf("Area in cm square: ");
		printf("%.2f",cm);
	}
	else if (c=='v')
	{
		printf("Enter the volume in cubic metre: ");
		scanf("%f",&vo);
		b=vo*100*100;
		printf("Area in cubic cm: ");
		printf("%.2f",b);
	}
	else
	{
		printf("You have Entered a wrong input");
	}
}
