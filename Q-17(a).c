#include<stdio.h>
int main()
{
    int arr[10000],i,p,s;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&s);
    printf("ENTER ELEMENTS OF ARRAY");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

  for(i=s-1;i<=0;i--)
  {
      arr[i]=arr[i+1];
  }
  s=s-1;

    printf("ARRAY AFTER DELLETING ELEMENT:");
    for(i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }


}
