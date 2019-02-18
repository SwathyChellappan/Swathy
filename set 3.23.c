#include <stdio.h>
int find_minimum(int[],int);

int main()
{
    int c,array[100],size,location,minimum;
    printf("input number of elements in array");
    scanf("%d",&size);
    printf("enter %d integers\n",size);
    for(c=0;c<size;c++)
    scanf("%d",&array[c]);
    printf("minimum element location=%dand value=%d.\n",location+1,minimum);
    return 0;
}
int find_minimum(int a[],int n){
    int c,min,index;
min=a[0];
    index=0;
    for(c=1;c<n;c++)
    {
        if(a[c]<min)
        {
            index=c;
            min=a[c];
            
        }
    }


    return index;
}
