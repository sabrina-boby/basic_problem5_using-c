// 12 23 30 32 38 42 50 60 65 70 85 90 100
#include<stdio.h>
int main()
{
    int a[14],i,n,k,mid,start=0,end;
    scanf("%d",&n);
    end=n-1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    for(i=0; i<n; i++)
    {
        printf("start = %d\n",start);
        printf("end = %d\n",end);
        mid=(start+end)/2;
        printf("start:%d\t end:%d\t mid:%d\t key:%d\n",start,end,mid,k);
        if(k==a[mid])
        {
            printf("position = %d",mid+1);
            break;
        }
        else if(k<a[mid])
            end=mid-1;
        else
            start=mid+1;


    }

    if(start>end)
        printf("not found");

}
