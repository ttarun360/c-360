#include<stdio.h>
#include<string.h>
void main()
{
    int i,len;
    char str[20];
    printf("Enter the String: ");
    gets(str);
    len=strlen(str);
    printf("\nReversed string is: ");
    for(i=len-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }
    
}