#include<stdio.h>
void main()
{
	int a,b,m,n,r;
	printf("请输入两个正整数a，b");
	scanf("%d,%d",&a,&b);
	if(a<b)
	{
		r=a;
		a=b;
		b=r;
	}
	m=a*b;
	while(b!=0)
	{
		n=a%b;
		a=b;
		b=n;
	}
	printf("它们的最大公约数为：%d\n",a);
	printf("它们的最小公倍数为：%d\n",m/a);
}
