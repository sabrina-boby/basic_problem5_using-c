#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,row,col;

    printf("enter row & col : ");
    scanf("%d %d",&row,&col);

    printf("\nenter a : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d] [%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter b : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("b[%d] [%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf(" a= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n b= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\n c= ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }

}
