#include<stdio.h>
int main()
{
    int a[20],n,i,k,start=0,end,mid;
    scanf("%d",&n);
    end=n-1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        mid=(start+end)/2;
        printf("start : %d\t end : %d\t mid : %d\t a[mid] : %d\t key : %d\n",start,end,mid,a[mid],k);
        if(k==a[mid])
        {
            printf("position = %d",mid+1);
            break;
        }
        else if(k<a[mid])
            end=(mid-1);
        else
            start=(mid+1);
    }
    if(start>end)
    {
        printf("not found");
    }
}



