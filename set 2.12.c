#include <stdio.h>

int main()
{
    int n,reversedinteger=0,remainder,originalinteger;
    printf("enter an integer");
    scanf("%d",&n);
    originalinteger=n;
    while(n!=0)
    {
        remainder=n%10;
        reversedinteger=reversedinteger*10+remainder;
        n/=10;
    }
    if(originalinteger=reversedinteger)
    printf("%d is palindrome",originalinteger);
    else
    printf("%d is mot palindrome",originalinteger);
    

    return 0;
}
