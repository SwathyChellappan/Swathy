#include <stdio.h>

int main()
{
    long long n;
    printf("enter an integer");
    scanf("%lld",&n);
    while(n!=0)
    {
        n/=10;
        ++count;
    
    }
    printf("number of digits %d",count);
    
}
