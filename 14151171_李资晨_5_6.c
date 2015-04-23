#include<stdio.h>
int main()
{
	int sum=0,j=1,n;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*i;
		sum=sum+j;

	}
	printf("sum=%d\n",sum);
	return 0;
}
