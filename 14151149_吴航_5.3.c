#include<stdio.h>
int main()
{
	int a,b,m,n,k;
	printf("请输入两个正整数m,n:");
	scanf("%d,%d,",&n,&m);
	if(n<m)
	{
		a=n;
		n=m;
		m=a;
	}
	b=m*n;
	while(m!=0)
	{
		k=n%m;
		n=m;
		m=k;
	}
	printf("最大公约数为:%d\n",n);
	printf("最小公倍数为:%d\n",b/n);
	return 0;
}
