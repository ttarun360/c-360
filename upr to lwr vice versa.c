#include<stdio.h>
#include<ctype.h>
main()
{
	char chr,l_u,u_l;
	scanf("%c",&chr);
	if (islower(chr))
	{
		l_u=toupper(chr);
		printf("\n%c",l_u);
	}
	else if (isupper(chr))
	{
		u_l=tolower(chr);
		printf("\n%c",u_l);
		
	}
}
