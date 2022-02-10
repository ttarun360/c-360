#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int alpha,digit,splch,i;
    i=0;
    alpha=digit=splch=0;
    printf("Enter the string: ");
	gets(str);
	while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}
