#include<stdio.h>
int main()
{
    int arr[3][3],exe[2][2],i,j;
    printf("ENTER ELEMENTS OF FIRST MATIX:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("TRANSPOSE OF MATRIX IS:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }




}
