
#include <stdio.h>

int main()
{int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&c);
    if(a>b && a>c)
    {printf("a is big");
    }
    else if(b>c)
    {printf("b is big");
    }
    else
    {
        printf("c is big");
    }
}
