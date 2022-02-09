#include<stdio.h>

main()
{

int num, n, bitstatus;
printf("enter number");
scanf("%d", &num);
printf("enter nth position of bit (0-31)");
scanf("%d", &n);
bitstatus = (num>>n)&1;
printf("the positon is set to %d",n,bitstatus);
 }