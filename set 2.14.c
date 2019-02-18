#include <stdio.h>

int main()
{ int num,m,n;
    printf("enter the value of m");
    scanf("%d",&m);
    printf("enter the value of n");
    scanf("%d",&n);
    printf("odd numbers in a given range m to n");
    for(num=m;num<=n;num++)
    {
        if(num % 2 == 1)
        printf("%d",num);
    }

    return 0;
}
