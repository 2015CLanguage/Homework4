#include<stdio.h>
int main()
{
	int p,r,n,m,s;
		printf("请输入两个正整数n,m:");
		scanf("%d,%d",&n,&m);
	if(n<m)//使n为大数
	{
		s=n;
		n=m;
		m=s;
	}
	p=n*m;
	while(m!=0)//while循环取余
	{
		r=n%m;
		n=m;
		m=r;
	}
	printf("这两个数的最大公约数为:%d\n",n);//输出
	printf("这两个数的最小公倍数为:%d\n",p/n);
	return 0;
