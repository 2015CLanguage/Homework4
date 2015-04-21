
#include<stdio.h>
int main()
{
	int a,b,c,m,n;
	printf("请输入两个数m，n:");
	scanf("%d,%d,",&m,&n);
	if(n<m)
	{
		c=n;
		n=m;
		m=c;
	}
	a=m*n;
	while(m!=0)
	{
		b=n%m;
		n=m;
		m=b;
	}
	printf("他们的最大公约数为:%d\n",n);
	printf("他们的最小公倍数为:%d\n",a/n);
	return 0;
}
