/* Sum of squre of digits in a number */

#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem;
        num=num/10;
    }
    printf("Sum of Square of Digits = %d", sum);
    return 0;
}
