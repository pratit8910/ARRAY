#include <stdio.h>

int main() {
    int digit[100], n, i, p,m;

    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);

    printf("ENTR %d ELEMENTS:\n", n);
    for(i = 0; i < n; i++)
        {
        scanf("%d", &digit[i]);
        }

    printf("ENTER NEW VALUE: ");
    scanf("%d", &m);

    printf("ENTER THE POSITION:");
    scanf("%d",&p);

    for(i=n;i>=p;i--)
  {
      digit[i]=digit[i-1];
  }
    digit[p-1]=m;

    n++;
    for(i=0;i<n;i++)
{
        printf("%d\n",digit[i]);
}
}

