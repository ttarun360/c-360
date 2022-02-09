#include<stdio.h>
main()
{
    int a,b,result;
    char op;
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
        result=a+b;
        break;
        
        case '-':
        result=a-b;
        break;
        
        case '*':
        result=a*b;
        break;
        
        case '/':
        result=a/b;
        break;
        
    }
    return 0;
}
