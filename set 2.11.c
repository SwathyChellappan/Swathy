#include <stdio.h>

int main()
{
    int num,pow;
    printf("enter the value of num");
    scanf("%d",&num);
    printf("enter the value of pow");
    scanf("%d",&pow);
    while(num>0)
    {
        num >>=1;
        ++pow;
    }
    printf("%d",pow);

    return 0;
}
