#include <stdio.h>
int find_maximum(int[],int);

int main()
{
    int c,array[100],size,location,maximum;
    printf("input number of elements in array");
    scanf("%d",&size);
    printf("enter %d integers\n",size);
    for(c=0;c<size;c++)
    scanf("%d",&array[c]);
    printf("maximum element location=%dand value=%d.\n",location+1,maximum);
    return 0;
}
int find_maximum(int a[],int n){
    int c,max,index;
    max=a[0];
    index=0;
    for(c=1;c<n;c++)
    {
        if(a[c]>max)
        {
            index=c;
            max=a[c];
            
        }
    }


    return index;
}
