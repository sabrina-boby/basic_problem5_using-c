// 1 5 8 9 4 3
#include<stdio.h>
int main()
{
    int a[10],i,j,n,m,position=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(m==a[i])
        {

            printf("position = %d",i+1);
            break;
        }
    }
    if(i==n)
        printf("not found");

}
