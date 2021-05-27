#include<stdio.h>
int main()
{
    int a[20],n,i;
    int start=0,end,mid,num;
    scanf("%d",&end);
    for(i=0; i<end; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    while(start<=end)
    {
        mid=(int)((start+end)/2);

        if(a[mid]==num)
        {
            printf("find it = %d",mid+1);
            break;
        }
        else if(a[mid]>num)
            end=(mid-1);
        else
            start=(mid+1);
             printf("start:%d\t end:%d\t mid:%d\t key:%d\t mid[num]:%d\n",start,end,mid,num,mid[a]);
    }
    if(start>end)
    {
        printf("start:%d\t end:%d\t mid:%d\t key:%d\t mid[num]:%d\n",start,end,mid,num,mid[a]);
        printf("failed");
    }

}
