#include <stdio.h>

int main()
{
	float x,y,z;
	printf("enter two angles of the triangle\n");
	scanf("%f%f",&x,&y);
	z=180-(x+y);
	printf("third angle of the triangle is %f",z);
	
	return 0;
}
