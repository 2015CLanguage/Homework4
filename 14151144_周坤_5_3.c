# Homework4
#include<stdio.h>
int main()
{
	int a,b,t,n,m;
	printf("请输入两个正整数n,m:");
	scanf("%d,%d,",&n,&m);
	if(n<m)
	{
		t=n;
		n=m;
		m=t;
	}
	a=n*m;
	while(m!=0)
	{
		b=n%m;
		n=m;
		m=b;
	}
	printf("它们的最大公约数为:%d\n",n);
	printf("它们的最小公倍数为:%d\n",a/n);
	return 0;
}
