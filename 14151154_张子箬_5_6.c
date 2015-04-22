#include<stdio.h>
int main()
{
	long a=1,sum=0;
	int i=1,n,k=1;
	scanf("%d",&n);
	while(k<=n)
	{
		while(i<=k)
		{
			a=a*i;
			i++;
		}
		sum=sum+a;
		k++;
	}
	printf("sum=%ld\n",sum);
	return 0;
}
