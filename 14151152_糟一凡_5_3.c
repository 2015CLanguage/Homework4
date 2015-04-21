#include"stdio.h"
int main()
{
	int m, n, a, b, r;
	printf("请输入两个正整数m和n:");
	scanf("%d,%d",&m,&n);
	if(m>n)
	{
		a=m;
		b=n;
	}
	else
	{
		a=n;
		b=m;
	}
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	printf("m和n的最大公约数为:%d\n",a);
	printf("m和n的最小公倍数为:%d\n",(m*n)/a);
	return 0;
}
