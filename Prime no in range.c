/* prime no in range */

#include <stdio.h>
int main()
{
	int min,max,i,j,count;
	printf("Enter the min value: ");
	scanf("%d",&min);
	printf("Enter the max value: ");
	scanf("%d",&max);
	for (i=min;i<=max;i++)
	{
		count=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				count++;
			}
		}
		if (count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
