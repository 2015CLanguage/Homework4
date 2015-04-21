#include<stdio.h>
int main()
{
	int p,r,m,n,temp;
	printf("请输入两个正整数m，n：");
	scanf("%d,%d",&m,&n);
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	p=m*n;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("它们的最大公约数为:%d\n",m);
	printf("它们的最小公倍数为:%d\n",p/m);
	return 0;
}
