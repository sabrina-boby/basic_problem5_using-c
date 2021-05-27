#include<stdio.h>
int main()
{
    int num[13]= {12,23,30,32,38,42,50,60,65,70,85,90,100};
    int start,end,mid,i,key;
    start=0;
    key=32;
    end=12;
    do
    {
        mid=(int)((start+end)/2);
        printf("start:%d\t end:%d\t mid:%d\t key:%d\t mid[num]:%d\n",start,end,mid,key,mid[num]);
        if(num[mid]==key)
        {
            printf("\nfind it : %d",mid+1);
            break;
        }
        else if(num[mid]>key)
        {
            end=(mid-1);
        }
        else
        {
            start=(mid+1);
        }
    }
    while(start<=end);
    if(start>end)
    {
        printf("\nfailed\n");
        printf("start:%d\t end:%d\t mid:%d\t key:%d\t mid[num]:%d\n",start,end,mid,key,mid[num]);
    }
}
