#include <stdio.h>

int main()
{
    int i,n;
    printf("enter an integer");
    scanf("%d",&n);
    for(i=1;i<=5;++i)
    {
        printf("%d * %d = %d \n ",n,i,n*i);
        
    }

    return 0;
}
