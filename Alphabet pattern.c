#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number (1-26): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
}
