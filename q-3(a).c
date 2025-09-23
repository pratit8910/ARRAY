#include<stdio.h>
int main()
{
    int i,a[5],temp,j;
    printf("ENTER 5 ELEMENTS:\n");
    for(i=1;i<=5;i++)
    {
        printf("ENTER %d VALUE:",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        for(j=i+1;j<=4;j++)
        {
         if(a[j]>a[i])
         {
            temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
    }
    }
    printf("sorted array");
    for(i=1;i<=5;i++)
    {

        printf("%d\n",a[i]);
    }
  return 0;
}
