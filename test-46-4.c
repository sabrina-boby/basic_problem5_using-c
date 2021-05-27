#include<stdio.h>
int main()
{
    int a[10],i,n,m,position=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(i=0; i<n; i++)
        {
            if(m==a[i])
            {
                position++;
                printf("position = %d\n",i+1);
                break;
            }
        }
        if(position==0)
            printf("not found \n");
    }
}
