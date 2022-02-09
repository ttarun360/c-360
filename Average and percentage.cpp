#include <stdio.h>
main()
{
	float a,b,c,d,e,total,average,percentage;
	printf("marks obtained in physics subject:-");
	scanf("%f",&a);
	printf("marks obtained in chemistry subject:-");
	scanf("%f",&b);
	printf("marks obtained in hindi subject:-");
	scanf("%f",&c);
	printf("marks obtained in telugu subject:-:-");
	scanf("%f",&d);
	printf("marks obtained in language subject:-");
	scanf("%f",&e);
	total=a+b+c+d+e;
	average=total/5;
	percentage=((total)/500)*100;
	printf("total marks in these five subjects is %f\n",total);
	printf("average %f\n",average); 
	printf("percentage %f\n",percentage);
}
