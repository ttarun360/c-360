/* perfect numbers in given range */

#include <stdio.h>
int main()
{
  int n,i,sum,min,max;
  printf("Min value: ");
  scanf("%d",&min);
  printf("Max value: ");
  scanf("%d",&max);
  printf("The Perfect numbers are: ");
  for(n=min;n<=max;n++)
  {
    i=1;
    sum = 0;
    while(i<n)
	{
      if(n%i==0)
           sum=sum+i;
           i++;
    }
    if(sum==n)
    {
    	printf("%d ",n);
	}
  }
  return 0;
}
