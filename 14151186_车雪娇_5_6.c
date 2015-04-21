#include <stdio.h>
#include <math.h>

int main()
{
    double i,sum;
    int n,a;
    a=1,i=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
          a=a*i;
          sum=sum+a;
      }
    printf("sum=%f\n",sum);
    return 0;
}
