// 12 23 30 32 38 42 50 60 65 70 85 90 100
#include<stdio.h>
int main()
{
    int a[20],i,j,m,n,start=0,end,mid;
    scanf("%d",&n);
    end=(n-1);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        mid=(int)((start+end)/2);
        printf("start : %d\t end : %d\t mid : %d\t  a[mid] :%d\n",start,end,mid,a[mid]);
        if(m==a[mid])
        {
            printf("position = %d",mid+1);
            break;
        }
        else if(m<a[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    if(start>end)
        printf("not found");

}
