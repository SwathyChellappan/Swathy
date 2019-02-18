#include <stdio.h>
#include <math.h>

int main()
{
    int num,i,remainder,result=0;
    printf("enter the 3 digit number");
    scanf("%d",&num);
    i=num;
    while(i !=0)
    {
        remainder=i % 10;
        result+=remainder*remainder*remainder;
        i /=10;
    }
    if(result == num)
    printf("%d is an armstrong num",num);
    else
    printf("%d is not an armstrong num",num);
    

    return 0;
}
