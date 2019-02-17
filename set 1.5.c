#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the values of a");
    scanf("%d",&a);
    printf("enter the values of b");
    scanf("%d",&b);
    printf("enter the values of c");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("a is big");
    else if(b>c)
    printf("b is big");
    else
    printf("c is big");

    return 0;
}
