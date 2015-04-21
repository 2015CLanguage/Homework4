#include "stdio.h"
void main()
{
	int s=0,n,i,k=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		k=k*i;
		s=s+k;
	}
	printf("%d\n",s);
}
