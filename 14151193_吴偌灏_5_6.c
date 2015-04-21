#include <stdio.h>
void main()
{    int i,sum,a,n;
     scanf("%d",&n);
     sum=0;a=1;
     for (i=1;i<=n;i++)
	 {   a=a*i;
		 sum=sum+a;
	 }
     printf("和为%d\n",sum);
}
