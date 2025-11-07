#include<stdio.h>
int main()
{
    int arr[5],k,p,i;
    printf("ENTER ELEMENTS OF ARRAY:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANT TO SEARCH:");
    scanf("%d",&k);

    p=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]==k)
        {
            p=1;

        printf("%d NUMBER IS AT %d POSITION",k,i+1);
        break;
        }
    }
    if(p==0)
    {
        printf("NUMBER NOT FOUND");
    }



}
