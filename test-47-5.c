#include<stdio.h>
int main()
{
    int a[20],i,m,n,mid,end,start;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);

    for(start=0; start<=end;)
    {
        mid=(int)((start+end)/2);
        printf("start:%d\t end:%d\t mid:%d\t key:%d\n",start,end,mid,m);
        if(m==a[mid])
        {
            printf("position = %d",mid+1);
            break;
        }
        else if(m<a[mid])
            end=(mid-1);
        else
            start=(mid+1);
    }
       if(start>end)
            printf("\nfailed\n");

}
