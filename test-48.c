#include<stdio.h>
int main()
{
    int a[5]= {2,3,4,1,5};
    int i,j,n,temp;
    n=5;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf(" %d ",a[i]);
    }
}



