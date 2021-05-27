#include<stdio.h>
int main()
{
    int n,m[20],i,k,cas=1;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&m[i]);
        scanf("%d",&k);
        for(i=0; i<n; i++)
            if(k==m[i])
                break;
        printf("case %d: ",cas);
        cas++;
        if(i==n)
            printf("no\n");
        else
            printf("%d\n",i+1);
    }
}
