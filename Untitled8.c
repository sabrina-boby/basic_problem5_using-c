#include<stdio.h>
int main()
{
    int a,ar,t,k;
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        scanf("%d",&a);
        for(int i=0; i<a; i++)
        {
            scanf("%d",&ar);
            k+=ar;
        }

        printf("%d\n",k);
        if(t)
            printf("\n");
    }

    return 0;
}
