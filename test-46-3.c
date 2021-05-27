#include<stdio.h>
int main()
{
    int a[10],n,i,m,position=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            break;
        }
    }
    if (i==n)
        printf("not found");
    else
        printf("%d",i+1);
}
