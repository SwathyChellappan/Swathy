
#include <stdio.h>
#include<math.h>

int main()
{
    int m,o,i,temp1,temp2,remainder,n=0,result=0;
    printf("enter 2 numbers");
    scanf("%d %d",&m,&o);
    printf("armstrong numbers between %d and %d are", m,o);
    for(i=m+1;i<o;++i)
    {
        temp2=i;
        temp1=i;
        while(temp1 !=0)
        {
            temp1 /= 10;
            ++n;
        }
        while(temp2!=0)
        {
            remainder=temp2%10;
            result+=pow(remainder,n);
            temp2 /=10;
        }
        if(result==i)
        {
            printf("%d",i);
            
        }
        n=0;
        result=0;
    }

    return 0;
}
