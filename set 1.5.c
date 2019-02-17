#include <stdio.h>
void main()
{
    float a,b,c;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    if(a>b && a>c)
    printf("1");
    else if(b>c)
    printf("-1");
    else
    printf("0");
}
