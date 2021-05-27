#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=10; j++)
        {
            k=k+i;
            printf("%d x %d = %d\n",i,j,k);
        }
        k=0;
        printf("\n");
    }
}
