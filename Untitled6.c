
#include<stdio.h>

int main()
{

    int a,b=1,i;
    scanf("%d",&a);

    while(a!=0)
    {
        b*=a%10;
        a/=10;
    }
    printf("%d\n",b);
}
