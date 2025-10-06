#include<stdio.h>
int main()
{
    int arr[2][2],exe[2][2],i,j;
    printf("ENTER ELEMENTS OF FIRST MATIX:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

     printf("ENTER ELEMENTS OF SECOND MATIX:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&exe[i][j]);
        }

    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",exe[i][j]);
        }
        printf("\n");
    }


    printf("SUM OF MATRIX IS :\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]+exe[i][j]);
        }
        printf("\n");
    }

}
