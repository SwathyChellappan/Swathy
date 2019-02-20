#include <stdio.h>

int main()
{
    int n,a,b,c,i;
    printf("enter the elment");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d%d",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }

    return 0;
}
