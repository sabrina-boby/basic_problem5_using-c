#include<stdio.h>
int main()
{
    int a,i,n,k,count=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
        }
        scanf("%d",&k);
        for(i=0; i<n; i++)
        {
            if(a==k)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("no\n");
        else
            printf("%d\n",i+1);
    }
}
