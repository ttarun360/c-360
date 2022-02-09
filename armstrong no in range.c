/*Armstrong numbers in a given range */

#include <stdio.h>
int main()
{
    int num,r,sum,temp,min,max;
	printf("Minimum Value: ");
    scanf("%d",&min);
	printf("Maximum Value : ");
    scanf("%d",&max);
	printf("Armstrong numbers in given range are: ");
    for(num=min;num<=max;num++)
	{
         temp=num;
         sum = 0;

         while(temp!=0)
		 {
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
         {
         	printf("%d ",num);
		 }    
    }
	printf("\n");
}
