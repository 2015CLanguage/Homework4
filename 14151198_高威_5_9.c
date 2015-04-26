#include <stdio.h>

int a[1001];
int sum,cnt;
int main()
{
	int i,j;
	for (i=1; i<=1000; i++)
	{
		cnt=0;
		sum=0;
		for (j=1; j<i; j++)
		if (i%j==0)
		{
			a[++cnt]=j;
			sum=sum+j;
			if (sum>i)  break;
		}
		if (sum==i)
		{
			printf("%d its factors are ",i);
			for (j=1; j<cnt; j++)  printf("%d,",a[j]);
			printf("%d\n",a[j]);
		}
	}
	return 0;
}
Enter file contents here#include <stdio.h>

int a[1001];
int sum,cnt;
int main()
{
	int i,j;
	for (i=1; i<=1000; i++)
	{
		cnt=0;
		sum=0;
		for (j=1; j<i; j++)
		if (i%j==0)
		{
			a[++cnt]=j;
			sum=sum+j;
			if (sum>i)  break;
		}
		if (sum==i)
		{
			printf("%d its factors are ",i);
			for (j=1; j<cnt; j++)  printf("%d,",a[j]);
			printf("%d\n",a[j]);
		}
	}
	return 0;
}
