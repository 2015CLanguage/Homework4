Enter file contents here#include <stdio.h>

int n,m;
int gcd(int n,int m)
{
	while (n%m)
	{
		int t=m;
		m=n%m;
		n=t;
	}
	return m;
}
int main()
{
	scanf("%d%d",&n,&m);
	printf("gcd(n,m)=%d\n",gcd(n,m));
	printf("lcm(n,m)=%d",m*n/gcd(n,m));
	return 0;
}
