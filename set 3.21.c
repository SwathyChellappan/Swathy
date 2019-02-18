#include <stdio.h>
#include <math.h>


int main()
{
    int a,d,n,i,m;
    int sum =0;
    
    printf("enter the first term value of A.P series");
    scanf("%d",&a);
    printf("enter the total terms of A.P series");
    scanf("%d",&n);
    printf("enter the common difference of A.P series");
    scanf("%d",&d);
    sum=(n*(2*a+(n-1)*d))/2;
    m=a+(n-1)*d;
    printf("sum of A.P series is");
    for(i=a;i<=m;i=i+d)
    {
        if(i!=m)
        printf("%d+",i);
        else
        printf("%d=%d",i,sum);
        
    }
    
 return 0;  




}





