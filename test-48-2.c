#include<stdio.h>
int main()
{
    int a[10],i,j,n,temp,k;
    while(scanf("%d",&n)!=EOF)
    {
    for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            for(k=0; k<n; k++)
                printf(" %d ",a[k]);
                printf("\n");
        }
        printf("\n");
    }
    }

}
