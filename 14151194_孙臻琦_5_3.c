#include <stdio.h>
int main()
{
	int n,m,a,b,temp;
	printf("请输入两个正整数m,n：");
	scanf("%d,%d,",&n,&m);
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
    a=n*m;
	while(m!=0)
	{
		b=n%m;
		n=m;
		m=b;
	}
	printf("最大公约数为：%d\n",n);
	printf("最小公倍数为：%d\n",a/n);
	return 0;
}
